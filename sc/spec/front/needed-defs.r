\literate[needed-defs]

% Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

	\begin{abstract}

	Extract those definitions that are needed for the main strategy and
	join the bodies of operators with multiple definitions.

	\end{abstract}

\begin{code}
module needed-defs
imports strategy sugar desugar stratlib list-set list-misc lib pack-graph
	dynamic-rules
\end{code}

	\paragraph{Sorting Definitions}

	Associate with the pair \verb|(f, n)| of strategy name and arity the list
	of its definitions. The dynamic rule \verb|Definitions| implements this
	association.

\begin{code}
strategies

  sort-defs = 
    map(
     {?def@SDef(f, xs, s);
      where(
        <length> xs => n;
        <Definitions <+ ![]> (f, n) => defs;
        <union>([n], <Arities <+ ![]> f) => ns;
        rules(
          Definitions : (f, n) -> [def | defs]
          Arities : f -> ns
        )
      )}
    )
\end{code}

	\paragraph{Joining Definitions}

	Join multiple definitions for the same strategy operator into one
	definition by unifying the list of formal strategy parameters.

\begin{code}
strategies

  joindefs = JoinDefs1 <+ JoinDefs2

rules

  JoinDefs1 : 
    [sdef] -> sdef

  JoinDefs2 : 
    defs @ [SDef(f, xs, s) | _] -> SDef(f, ys, <choices> ss)
    where <map(VarDec(new,id))> xs => ys;
	  <map(\ VarDec(y, t) -> Call(SVar(y), []) \ )> ys => ys'; 
	  <map(\ SDef(_, zs, s) -> <ssubs> (<map(\ VarDec(x,_) -> x \ )> zs, ys', s) \ )> defs => ss

  choices = 
    foldr(!Fail, !Choice(<Fst>,<Snd>))
\end{code}

	\paragraph{Obtaining Needed Definitions}

\begin{code}
strategies

  definition-names =
    foldr(![], union, \ SDef(f,xs,_) -> [(f, <length>xs)]\ )

  all-defs = 
    !(<definition-names>, <sort-defs>, []);
    extract-needed-defs

  needed-defs = 
    !([("main", 0)], <sort-defs>, []);
    extract-needed-defs

  extract-needed-defs =
    graph-nodes-undef-roots-chgr(get-definition
                          ,svars-arity; map(try(DefinitionExists))
                          ,\ (_,x,d) -> [x|d] \ );
    // FilterNonMissingDefs; 
    (NoMissingDefs <+ MissingDefs; <exit> 1)

\end{code}

	A strategy operator f with arity n is needed. All definitions for
	the operator are fetched and joined. Note that this entails
	that (1) operators can be overloaded and (2) there can be more
	than one definition of an operator.

\begin{code}
rules

  get-definition = 
    CongruenceDef <+ OverloadedDef; (joindefs, id)

  DefinitionExists :
    (f, 0) -> (f, n)
    where <Arities> f => [n]; <Definitions> (f, n)

  DefinitionExists =
    ?(f, 0)
    ; <Arities> f => [_,_|_]
    ; not(fetch(?0))
    ; <error> ["passing name of overloaded definition: ", f]
    ; giving-up

  OverloadedDef :
    ((f, n), defs) -> (<Definitions> (f, n), defs)

  CongruenceDef :
    ((Mod(c, mod), n), defs) -> (fdef, defs)
    where <DefineCongruence; desugar> (c, mod, n) => fdef

(*
  FilterNonMissingDefs :
    (defs, undefs) -> (defs, undefs')
    where <filter(not(Definitions))> undefs => undefs'
*)

  NoMissingDefs : 
    (defs, []) -> defs

  MissingDefs : 
    (defs, [f|fs]) -> defs
    where <map(MissingDefMod <+ MissingDef)> [f|fs]

  MissingDef : 
    (f, n) -> <error> ["error: operator ", f, "/", n, " undefined "]

  MissingDefMod : 
    (Mod(c, m), n) -> 
    <error> ["error: operator ", c, "^", m , "/", n, " undefined "]
\end{code}

	\paragraph{Distributing Congruences}

	For each constructor \verb|c|, there is a corresponding
	distributing congruence \verb|c^D|, defined according to
	the following scheme:

\begin{verbatim}
  c^D(s1,...,sn) : Pair(c(x1,...,xn),env) -> c(y1,...,yn)
  where <s1> Pair(x1,env) => y1;
        ...
        <sn> Pair(xn, envn) => yn
\end{verbatim}
	
	This is implemented by the following rules.

\begin{code}
overlays
  OpPair(t1, t2) = Op("Pair", [t1,t2])

rules
  DefineCongruence :
    (c, "D", n) -> 
    SDef(Mod(c, "D"), ss, Scope([env | <conc>(xs1, ys1)], 
                                SRule(Rule(OpPair(Op(c, xs2), Var(env)), 
                                           Op(c, ys2), 
                                           Seqs(conds)))))
    where new => env;
          <copy(MkDistApplication); tuple-unzip(id)> (n, Var(env)) 
              => (conds, ss, xs1, xs2, ys1, ys2)

  MkDistApplication : 
    env -> (BAM(Call(SVar(s),[]), OpPair(Var(x), env), Var(y)), 
            VarDec(s,DefaultStrat), x, Var(x), y, Var(y))
    where new => s; new => x; new => y
\end{code}

	\paragraph{Threading Congruences}

	For each constructor \verb|c|, there is a corresponding
	threading congruence \verb|c^T|, defined according to
	the following scheme:

\begin{verbatim}
  c^T(s1,...,sn) : Pair(c(x1,...,xn),e-first) -> Pair(c(y1,...,yn), e-last)
  where <s1> Pair(x1,e-first) => Pair(y1,e2);
              ...;
        <sn> Pair(xn, en) => Pair(yn, e-last)
\end{verbatim}

	The following rules implement this scheme:

\begin{code}

  DefineCongruence :
    (c, "T", 0) -> 
    SDef(Mod(c, "T"), [], Scope([e], 
                                SRule(Rule(OpPair(Op(c, []), Var(e)), 
                                           OpPair(Op(c, []), Var(e)), 
                                           Id))))
    where new => e

  DefineCongruence :
    (c, "T", n) -> 
    SDef(Mod(c, "T"), ss, Scope([e-first | <concat> [es, xs1, ys1]], 
                                SRule(Rule(OpPair(Op(c, xs2), Var(e-first)), 
                                           OpPair(Op(c, ys2), Var(e-last)), 
                                           Seqs(as)))))
    where <copy(new)> (<add>(n,1), ()) => [e-first | es];
          <last> es => e-last;
          <zipr(MkThreadApplication); tuple-unzip(id)> ([e-first | es], es)
	     => (as, ss, xs1, xs2, ys1, ys2)

  MkThreadApplication : 
    (e1,e2) -> (BAM(Call(SVar(s),[]), OpPair(Var(x), Var(e1)), 
                                      OpPair(Var(y), Var(e2))), 
                VarDec(s,DefaultStrat), x, Var(x), y, Var(y))
    where new => s; new => x; new => y
\end{code}
