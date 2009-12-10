package org.strategoxt.lang;

import org.spoofax.interpreter.core.IConstruct;
import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterErrorExit;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.InterpreterExit;
import org.spoofax.interpreter.core.VarScope;
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.stratego.StupidFormatter;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * Adapts an {@link Strategy} strategy to a {@link SDefT},
 * making compiled strategies available to the interpreter.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class InteropSDefT extends SDefT {
	
	private static final ConstType CONST_TYPE = new ConstType();
	
	private static final SVar[] NO_SVARS = {};
	
	private static final String[] NO_STRINGS = {};
	
	private final Context compiledContext;
	
	private final String strategyClassName;
	
	private final ClassLoader classLoader;
	
	private Strategy strategy;

	public InteropSDefT(Strategy strategy, IContext context, Context compiledContext) {
		super(context.getVarScope());
		this.strategyClassName = null;
		this.classLoader = null;
		this.compiledContext = compiledContext;
		this.strategy = strategy;
	}

	/**
	 * Creates a new InteropSDefT that dynamically loads the specified strategy class.
	 */
	public InteropSDefT(ClassLoader classLoader, String strategyClassName, IContext context, Context compiledContext) {
		super(context.getVarScope());
		this.classLoader = classLoader;
		this.strategyClassName = strategyClassName;
		this.compiledContext = compiledContext;
	}

	public static SDefT[] toInteropSDefTs(Strategy[] strategies, IContext context, Context compiledContext) {
		SDefT[] results = new SDefT[strategies.length];
		for (int i = 0; i < strategies.length; i++) {
			Strategy strategy = strategies[i];
			if (strategy instanceof InteropStrategy) {
				results[i] = ((InteropStrategy) strategy).getDefinition();
			} else {
				results[i] = new InteropSDefT(strategy, context, compiledContext);
			}
		}
		return results;
	}

	@Override
	public String getName() {
		return getStrategy().getName();
	}
	
	@Override
	protected void setName(String name) {
		throw new UnsupportedOperationException();
	}
    
    @Override
    public boolean isCompiledStrategy() {
        return true;
    }

	@Override
	public SVar[] getStrategyParams() {
		SVar[] results = super.getStrategyParams();
		if (results != null) return results;
		
		String name = getName();
		int countEnd = name.lastIndexOf('_');
		int countStart = name.lastIndexOf('_', countEnd - 1);
		if (countStart == -1 || countEnd == -1) {
			return NO_SVARS; // FIXME: properly handle "lifted" InteropSDefT strategies
		}
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
		int count;
		try {
			count = Integer.parseInt(name.substring(countStart + 1));
		} catch (NumberFormatException e) {
			// FIXME: properly handle "lifted" InteropSDefT strategies
			return NO_STRINGS;
		}
		
		if (count == 0) return NO_STRINGS;
	
		results = new String[count];
		for (int i = 0; i < results.length; i++) {
			results[i] = "t" + i;
		}
	
		return results;
	}
	
	@Override
	public org.spoofax.interpreter.stratego.Strategy getBody() {
		org.spoofax.interpreter.stratego.Strategy result = super.getBody();
		if (result == null) {
			result = new StrategyBody();
			setBody(result);
		}
		return result;
	}
	
	@Override
	public org.spoofax.interpreter.stratego.Strategy getParametrizedBody(
			final org.spoofax.interpreter.stratego.Strategy[] sargs,
			final IStrategoTerm[] targs) {
		
		return new StrategyBody() {
			@Override
			public boolean evaluate(IContext env) throws InterpreterException {
				SDefT[] sargDefs = new SDefT[sargs.length];
				for (int i = 0; i < sargs.length; i++) {
					sargDefs[i] = new SDefT("s" + i, NO_SVARS, NO_STRINGS, sargs[i], env.getVarScope());
				}
				return InteropSDefT.this.evaluate(env, InteropStrategy.toInteropStrategies(sargDefs, env), targs);
			}
		};
	}
	
	@Override
	public boolean evaluate(IContext env)
			throws  InterpreterErrorExit, InterpreterExit, InterpreterException {
		
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
		
		return evaluate(env, InteropStrategy.toInteropStrategies(sargs, env), targs);
	}

	private boolean evaluate(IContext env, Strategy[] sargs, IStrategoTerm[] targs)
			throws InterpreterErrorExit, InterpreterExit, InterpreterException {
		
		IStrategoTerm result;
		try {
			result = getStrategy().invokeDynamic(compiledContext, env.current(), sargs, targs);
		} catch (StrategoErrorExit e) {
			throw new InterpreterErrorExit(e.getMessage(), e.getTerm(), e);
		} catch (StrategoExit e) {
			throw new InterpreterExit(e.getValue(), e);
		} catch (MissingStrategyException e) {
			// Programmer error: not the same as a UndefinedStrategyException
			throw new InterpreterException(e);
		}
		
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
				Class<?> strategyClass = classLoader.loadClass(strategyClassName);
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
	
	/**
	 * The strategy body used by the interpreter.
	 * 
	 * @author Lennart Kats <lennart add lclnet.nl>
	 */
	private class StrategyBody extends org.spoofax.interpreter.stratego.Strategy {
		public IConstruct eval(IContext env) throws InterpreterException {
			return evaluate(env)
				? getHook().pop().onSuccess(env)
				: getHook().pop().onFailure(env);
		}
		
		@Override
		public boolean evaluate(IContext env) throws InterpreterException {
			return InteropSDefT.this.evaluate(env);
		}

		public void prettyPrint(StupidFormatter fmt) {
			InteropSDefT.this.prettyPrint(fmt);
		}
		
		@Override
		protected String getTraceName() {
			return getName();
		}
	}
}

