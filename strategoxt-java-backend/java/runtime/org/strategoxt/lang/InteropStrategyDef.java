package org.strategoxt.lang;

import org.spoofax.interpreter.core.IConstruct;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.VarScope;
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.stratego.StupidFormatter;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * Adapts an {@link Strategy} strategy to a {@link SDefT},
 * making compiled strategies accessible to the interpreter.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class InteropStrategyDef extends SDefT {
	
	private static final ConstType CONST_TYPE = new ConstType();
	
	private static final SVar[] NO_SVARS = {};
	
	private static final String[] NO_STRINGS = {};
	
	private final Context compiledContext;
	
	private final VarScope scope;
	
	private final String strategyClassName;
	
	private Strategy strategy;

	public InteropStrategyDef(Strategy strategy, IContext context, Context compiledContext) {
		this.strategyClassName = null;
		this.compiledContext = compiledContext;
		this.scope = context.getVarScope();
		this.strategy = strategy;
	}

	/**
	 * Creates a new InteropStrategyDef that dynamically loads the specified strategy class.
	 */
	public InteropStrategyDef(String strategyClassName, IContext context, Context compiledContext) {
		this.strategyClassName = strategyClassName;
		this.compiledContext = compiledContext;
		this.scope = context.getVarScope();
	}

	public static SDefT[] toInteropStrategyDefs(Strategy[] strategies, IContext context, Context compiledContext) {
		SDefT[] results = new SDefT[strategies.length];
		for (int i = 0; i < strategies.length; i++) {
			Strategy strategy = strategies[i];
			if (strategy instanceof InteropSDefT) {
				results[i] = ((InteropSDefT) strategy).getDefinition();
			} else {
				results[i] = new InteropStrategyDef(strategy, context, compiledContext);
			}
		}
		return results;
	}

	@Override
	public String getName() {
		return getStrategy().getName();
	}

	@Override
	public SVar[] getStrategyParams() {
		SVar[] results = super.getStrategyParams();
		if (results != null) return results;
		
		String name = getName();
		int countEnd = name.lastIndexOf('_');
		int countStart = name.lastIndexOf('_', countEnd - 1);
		int count = Integer.parseInt(name.substring(countStart + 1, countEnd));
		
		if (count == 0) return NO_SVARS;
		
		results = new SVar[count];
		for (int i = 0; i < results.length; i++) {
			results[i] = new SVar("s" + i, CONST_TYPE);
		}
		
		return results;
	}

	@Override
	public String[] getTermParams() {
		String[] results = super.getTermParams();
		if (results != null) return results;
		
		String name = getName();
		int countStart = name.lastIndexOf('_');
		int count = Integer.parseInt(name.substring(countStart + 1));
		
		if (count == 0) return NO_STRINGS;
		
		results = new String[count];
		for (int i = 0; i < results.length; i++) {
			results[i] = "t" + i;
		}
		
		return results;
	}
	
	@Override
	public VarScope getScope() {
		return scope;
	}
	
	@Override
	public org.spoofax.interpreter.stratego.Strategy getBody() {
		return new org.spoofax.interpreter.stratego.Strategy() {
			public IConstruct eval(IContext env) throws InterpreterException {
				return evaluate(env)
					? getHook().pop().onSuccess(env)
					: getHook().pop().onFailure(env);
			}
			
			@Override
			public boolean evaluate(IContext env) throws InterpreterException {
				return InteropStrategyDef.this.evaluate(env);
			}

			public void prettyPrint(StupidFormatter fmt) {
				InteropStrategyDef.this.prettyPrint(fmt);
			}
			
			@Override
			protected String getTraceName() {
				return getName();
			}
		};
	}
	
	@Override
	public boolean evaluate(IContext env) throws InterpreterException {
		VarScope scope = env.getVarScope();
		SVar[] svars = getStrategyParams();
		String[] tvars = getTermParams();
		SDefT[] sargs = new SDefT[svars.length];
		IStrategoTerm[] targs = new IStrategoTerm[tvars.length];
		
		for (int i = 0; i < svars.length; i++) {
			SDefT sarg = scope.lookupSVar(svars[i].name);
			if (sarg == null) throw new InterpreterException("Missing strategy argument: " + svars[i].name);
			sargs[i] = sarg;
		}
		
		for (int i = 0; i < tvars.length; i++) {
			IStrategoTerm targ = scope.lookup(tvars[i]);
            if (targ == null) throw new InterpreterException("Missing term argument: " + tvars[i]);
			targs[i] = targ;
		}
		
		Strategy[] sdefargs = InteropSDefT.toInteropSDefTs(sargs, env);
		IStrategoTerm result = getStrategy().invokeDynamic(compiledContext, env.current(), sdefargs, targs);
		
		if (result != null) {
			env.setCurrent(result);
			return true;
		} else {
			return false;
		}
	}
	
	public Strategy getStrategy() {
		if (strategy == null) {
			try {
				Class<?> strategyClass = Class.forName(strategyClassName);
				strategy = (Strategy) strategyClass.getField("instance").get(null);
			} catch (ClassNotFoundException e) {
				throw new StrategoException("Unable to instantiate compiled strategy", e);
			} catch (IllegalAccessException e) {
				throw new StrategoException("Unable to instantiate compiled strategy", e);
			} catch (IllegalArgumentException e) {
				throw new StrategoException("Unable to instantiate compiled strategy", e);
			} catch (SecurityException e) {
				throw new StrategoException("Unable to instantiate compiled strategy", e);
			} catch (NoSuchFieldException e) {
				throw new StrategoException("Unable to instantiate compiled strategy", e);
			}
		}
			
		return strategy;
	}
}

