\literate[{\tt IMPLODE-ASFIX}]
% GT -- Grammar Tools
% Copyright (C) 2000-2002 
%                    Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
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

	This module defines a transformation from AsFix terms produced
	by the SDF2 parser to abstract syntax terms. The
	transformation removes layout and literals, collapses lexical
	terms to strings and replaces production applications by
	applications of a derived constructor name.

	See module \verb|asfix| for a signature of AsFixTerms.

	TODO: \\
	- complete list of special constructors\\

\begin{code}
module implode-asfix
imports lib asfix options

signature
   constructors
      FlatLex      : Option
      FlatList     : Option
      RemoveLayout : Option
      FlatInj      : Option
      ReplaceAppl  : Option
      RemoveLit    : Option
      RemovePT     : Option
      RemoveSeq    : Option
      FlatAlt      : Option

      layout : String -> Layout
\end{code}

  \paragraph{Main}

	The main strategy first removes the \verb|parsetree| wrapper
	function. It then removes layout, transforms lexical trees
	into strings and context-free trees into constructor
	applications.

\begin{code}
strategies

    implode-asfix = 
      iowrap(implode, 
                Option( "--lex",    !FlatLex,      !"--lex            Flatten lexical substrings to strings" ) 
              + Option( "--layout", !RemoveLayout, !"--layout         Remove layout nodes from the AsFix? parse tree" )
              + Option( "--lit",    !RemoveLit,    !"--lit            Remove literal nodes from the AsFix? parse tree") 
              + Option( "--alt",    !FlatAlt,      !"--alt            Flat alternatives")
              + Option( "--appl",   !ReplaceAppl,  !"--appl           Replace 'appl' applications by constructor applications" )
              + Option( "--inj",    !FlatInj,      !"--inj            Remove injections from the parse tree." )
              + Option( "--list",   !FlatList,     !"--list           Flatten lists." )
              + Option( "--seq",    !RemoveSeq,    !"--seq            Replace sequences by tuples" )
              + Option( "--pt",     !RemovePT,     !"--pt             Remove the outer 'pt' function symbol from the parse tree" ) )

    short-description(p) = !["Usage: ", <p>(), " [options]"]
    long-description(p)  = !["The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n",
                             "Without any switches, a full implosion is performed. By specifying any switches,\n",
                             "the exact implosion steps to perform can be specified.\n"]

    implode =
       ?term;
       try((option-defined(FlatLex),      flat-lex));
       try((option-defined(RemoveLayout), remove-layout));
       try((option-defined(FlatList),     flat-list));
       try((option-defined(RemoveLit),    remove-lit));
       try((option-defined(FlatInj),      flat-injections));
       try((option-defined(FlatAlt),      flat-alt));
       try((option-defined(ReplaceAppl),  replace-appl));
       try((option-defined(RemoveSeq),    remove-seq));
       try((option-defined(RemovePT),     remove-pt));
       try(?term; (id, implodeAsfix))

  // 1) Flatten lexical sub trees in the parse tree
  flat-lex = downup2( try(implode-lexical), try(flat-layout))
  
  // 2) Remove layout nodes from the parse tree
  remove-layout = remove-x( is-layout' )
   
  // 3) Remove literal nodes from the parse tree
  remove-lit    = 
        topdown(try(is-list;filter(not(lit(id)))))

  // 4) Flatten Alternatives: appl(alt(a,alt(b,alt(c,d))),[d]) -> alt(4,d)
  flat-alt = topdown( try(FlatAlt) )

  // 5) Replace appl nodes with their cons attribute if available.
  replace-appl = topdown(try(appl(id,id);Cns)); conc-to-cons

  // 6) Flatten injections in a parse tree
  flat-injections = bottomup(try(Inj))

  // 7) Flatten list constructs 
  flat-list = topdown( try(FlatList) )

  // 8) Replace sequence by tuples
  remove-seq = topdown(try(Tuple))

  // 9) Remove parsetree term from parse tree
  remove-pt = PT
  
  // Apply all previous filters together
  implodeAsfix' = 
    PT
  ; rec x(try(
       implode-lexical
    <+ appl(id, filter(not(is-layout); x))
       ; (OptList <+ Cns <+ Inj <+ Tuple <+ FlatAlt)
    <+ amb(list(x))
    ))
  ; conc-to-cons

  // Apply all previous filters together
  implodeAsfix = 
    PT
  ; rec impl(
       implode-lexical
    <+ appl(id, filter(not(is-layout)))
       ; (OptList; impl 
          <+ ReplCons(impl) 
          <+ Inj; impl 
          <+ Tuple; impl 
          <+ FlatAlt; impl)
    <+ amb(list(impl))
    <+ all(impl)
    )

rules

  PT : parsetree(t, _) -> t  

strategies

  // Remove nodes from the prod and arguments of an appl for which 'cond'
  // holds.
  remove-x(cond) =
    topdown(try(
      appl(prod(filter(not(cond)),id,id),filter(not(cond)))))

  flat-layout =
      \ appl(prod(_,cf(layout),_), x) -> <concat-strings> x \
    + \ appl(prod(_,cf(opt(layout)),_),[]) -> layout([]) \
    + \ appl(prod(_,cf(opt(layout)),_),[xs]) -> layout([xs]) \

  FlatAlt =
   (  appl(prod([cf(?s)<+?s], cf(?alt(a1,a2)),  id), ?args)
   <+ appl(prod([?s],         lex(?alt(a1,a2)), id), ?args)
   );  
   !(alt(a1, a2), 1);
   rec x({n, ai, aj:
        ?(s, n); !alt(n,args)
     <+ ?(alt(s, si), n); !alt(n, args)
     <+ ?(alt(ai, aj), n ); <x>(aj, <add>(n, 1))
   })

// Flatten list constructs
rules

  FlatList: 
    appl(prod([cf(iter(_))],cf(iter-star(_)),_),[x]) -> <FlatList>x

  FlatList: 
    appl(prod([],cf(iter-star(_)),_),[]) -> []

  FlatList: 
    appl(prod(_,cf(iter(_)),_),[x]) -> [x]

  FlatList: 
    appl(prod(_,cf(iter(_)),_),[x|xs]) -> z
    where
      rec x (
         \ appl(prod(_,cf(iter(_)),_),[a]) -> [a] \
      <+ \ appl(prod(_,cf(iter(_)),_),[a,b]) -> <concat>[<x>a, <x>b] \
      <+ \ appl(prod(_,cf(iter(_)),_),[a,w,b]) -> <concat>[<x>a,[w],<x>b] \
      ) => z

  FlatList: 
    appl(prod([cf(iter-sep(_,_))],cf(iter-star-sep(_,_)),_),[x]) -> <FlatList>x

  FlatList: 
    appl(prod([], cf(iter-star-sep(_,_)),_),[]) -> []

  FlatList: 
    appl(prod(_,cf(iter-sep(_,_)),_),[x]) -> [x]

  FlatList: 
    appl(prod(_,cf(iter-sep(_,_)),_),[x|xs]) -> z
    where
      rec x (
          \ appl(prod(_,cf(iter-sep(_,_)),_),[a]) -> [a] \
       <+ \ appl(prod(_,cf(iter-sep(_,_)),_),[a,b,c]) -> <concat>[<x>a, [b],<x>c] \
       <+ \ appl(prod(_,cf(iter-sep(_,_)),_),[a,w1,b,w2,c])
	  -> <concat>[<x>a, [w1,b,w2],<x>c] \
      ) => z

\end{code}

	\paragraph{Implode Lexical}

	The yield of an AsFixTerm is the string consisting of the
	characters at the leaves of the tree.1

\begin{code}
rules
  Kids  : appl(p, ts) -> <concat> ts
  Kids' : x -> [x]
strategies

  yield = rec x((appl(id, map(x)); Kids) <+ Kids'); implode-string

  implode-lexical = 
      ?appl(prod([lex(_)],cf(_),_), _); yield
    + ?appl(prod(_,lit(_),_),_); !lit(<yield>)
    + ?appl(prod(_,varsym(_),_),_); !meta-var(<yield>)
\end{code}

	\paragraph{Layout}

	A tree represents layout if it is either of sort
	\verb|cf(opt(layout))| or a literal, i.e., of sort
	\verb|lit(_)|. The strategy \verb|rm-layout| removes all
	layout from a tree.

\begin{code}
strategies

  is-layout =
    appl(prod(id, cf(opt(layout)) + lit(id), id), id) 
//+ appl(prod([lit(id)],cf(alt(id,id)),no-attrs), id)
  + cf(opt(layout))

  is-layout' = appl(prod(id, cf(opt(layout)) + lit(id), id), id)
             + cf(opt(layout))
             + layout(id)
             
  rm-layout = rec x(try(appl(id, filter(not(is-layout); x)) + amb(list(x))))
\end{code}

	\paragraph{Constructors}

	An application of a context-free production is transformed
	into an actual application of a constructor name to the list
	of children. The Stratego primitive \verb|mkterm| takes a pair
	of a string \verb|c| and a list of terms \verb|ts| and turns
	it into the term \verb|c(ts)|. The constructor \verb|c| is
	derived from the production. If it has a \verb|cons(c)|
	attribute that attribute is taken. Otherwise the production
	should be some derived production for regular expressions.

\begin{code}
strategies

  ReplCons(impl) =
    ReplNamedCons(impl)
    <+ ReplConsNil(impl)
    <+ ReplConsNone(impl)
    <+ ReplConsIns(impl)
    <+ ReplConsSome(impl)
    <+ ReplConsConc(impl)

rules

  ReplNamedCons(impl) : 
    appl(p, ts) -> c#(<map(impl)>ts)
    where <get-cons; try(Rename-Keyword)> p => c

  get-cons : 
    prod(_, _, as) -> x
    where <oncetd(?cons(x))> as

  ReplConsNil(impl) : 
    appl(p, []) -> []
    where <is-nil> p

  ReplConsNone(impl) : 
    appl(p, []) -> None
    where <is-none> p

  ReplConsIns(impl) : 
    appl(p, [t]) -> [<impl>t]
    where <is-ins> p

  ReplConsSome(impl) : 
    appl(p, [t]) -> Some(<impl>t)
    where <is-some> p

  ReplConsConc(impl) : 
    appl(p, [t1,t2]) -> <conc>(<impl>t1, <impl>t2)
    where <is-conc> p

  is-nil  = ?prod([],cf(iter-star-sep(_,_)),_)
  is-nil  = ?prod([],cf(iter-star(_)),_)
  is-nil  = ?prod([],iter-star-sep(_,_),_)
  is-nil  = ?prod([],iter-star(_),_)

  is-ins  = ?prod([cf(x)], cf(iter-sep(x,_)), _)
  is-ins  = ?prod([cf(x)], cf(iter(x)), _)
  is-ins  = ?prod([x], iter-sep(x,_), _)
  is-ins  = ?prod([x], iter(x), _)

  is-conc = ?prod([_,_,_,_,_],cf(iter-sep(_,_)),_)
  is-conc = ?prod([_,_,_],cf(iter(_)),_)
  is-conc = ?prod([_,_,_],iter-sep(_,_),_)
  is-conc = ?prod([_,_],iter(_),_)

  is-none = ?prod([], cf(opt(_)), _)
  is-none = ?prod([], opt(_), _)

  is-some = ?prod([cf(x)], cf(opt(x)), _)
  is-some = ?prod([x], opt(x), _)
\end{code}

\begin{code}
strategies

  Cns = CnsNil <+ CnsGeneric

rules

  Position : 
    t -> position(t, p)
    where <get-annotation>(t, "position") => p

  CnsNil : 
    appl(p, ts) -> []
    where <ConstrNil> p => c 

  ConstrNil : prod([],cf(iter-star-sep(_,_)),_)     -> "Nil"
  ConstrNil : prod([],cf(iter-star(_)),_)           -> "Nil"
  ConstrNil : prod([],iter-star-sep(_,_),_)         -> "Nil"
  ConstrNil : prod([],iter-star(_),_)               -> "Nil"

  CnsGeneric : 
    appl(p, ts) -> c#(ts)
    where <(Constr0 <+ Constr1);try(Rename-Keyword)> p => c 

  Constr0 : 
    prod(_, _, as) -> x
    where <oncetd(?cons(x))> as

  Constr1 : prod([cf(x)], cf(iter-sep(x,_)), _)   -> "Ins"
  Constr1 : prod([cf(x)], cf(iter(x)), _)         -> "Ins"
  Constr1 : prod([x], iter-sep(x,_), _)           -> "Ins"
  Constr1 : prod([x], iter(x), _)                 -> "Ins"

  Constr1 : prod([_,_,_,_,_],cf(iter-sep(_,_)),_) -> "Conc"
  Constr1 : prod([_,_,_],cf(iter(_)),_)           -> "Conc"
  Constr1 : prod([_,_,_],iter-sep(_,_),_)	  -> "Conc"
  Constr1 : prod([_,_],iter(_),_)                 -> "Conc"

  Constr1 : prod([], cf(opt(_)), _)		  -> "None"
  Constr1 : prod([], opt(_), _)			  -> "None"

  Constr1 : prod([cf(x)], cf(opt(x)), _)          -> "Some"
  Constr1 : prod([x], opt(x), _)                  -> "Some"

  Constr23 : 
    prod(args, cf(iter-sep(x, y)), _) -> c
    where <(?[cf(x)]; !"Ins" <+ ?[_,_,_,_,_]; !"Conc")> args => c

  Rename-Keyword: "module" 	-> "Module"
  Rename-Keyword: "exports"	-> "Exports"
  Rename-Keyword: "hiddens"	-> "Hiddens"
  Rename-Keyword: "id"		-> "Id"
  Rename-Keyword: "imports"	-> "Imports"
  Rename-Keyword: "sorts"	-> "Sorts"

rules

  OptList : 
    appl(prod([], cf(opt(s)), _), []) -> []
    where <is-list> s

  OptList : 
    appl(prod([cf(s)], cf(opt(s)), _), [x]) -> x
    where <is-list> s

  OptList : 
    appl(prod([], opt(s), _), []) -> []
    where <is-list> s

  OptList : 
    appl(prod([s], opt(s), _), [x]) -> x
    where <is-list> s

strategies

  list-sort =  
    iter(id) +
    iter-sep(id, id) +
    iter-star(id) + 
    iter-star-sep(id, id)

  is-list = 
    rec x(list-sort +
          seq(list(lit(id) + layout + x)))
\end{code}

	\paragraph{Injections}

	Injections are nodes in a tree with a single child. Such nodes
	can be ignored if they only relate syntactic information
	instead of structural information. For instance, bracket nodes
	are only necessary for syntactic purposes.
	
	Note: the \verb|?sort("<START>")| is necessary because
	\verb|sort| is also defined as a strategy operator that sorts
	lists.
\begin{code}
rules

  Inj : 
    appl(p, [t]) -> t
    where <injection> p

strategies

  injection = 
    prod(id, ?sort("<START>"), no-attrs)

  injection = 
    prod(id, id, oncetd("bracket"))

  injection = 
    prod([cf(iter(?x))],cf(iter-star(?x)),no-attrs)

  injection = 
    prod([cf(iter-sep(?x,?l))],cf(iter-star-sep(?x,?l)),no-attrs)

  injection = 
    prod([not(lit(id))]
	 ,rec x(sort(id) + cf(x) + lex(x) 
		+ iter(x) + iter-star(x) 
		+ iter-sep(x,lit(id)) + iter-star-sep(x,lit(id)))
	,not(oncetd(cons(id))))

  injection = 
    prod(filter(not(cf(opt(layout)) + lit(id) )); [id], 
         cf(seq(id)), id)

  injection = 
    prod(filter(not(cf(opt(layout)) + lit(id) )); [id], 
         seq(id), id)

  injection = 
    prod([sort(id) + cf(sort(id))]
        ,injective-alt
        ,not(oncetd(cons(id))))

  injection = 
    prod([varsym(id)],id,not(oncetd(cons(id))))

  injective-alt = 
    rec x(sort(id) + cf(x) + alt(x,x))
\end{code}

	\paragraph{Tuples}

\begin{code}
rules

  Tuple : 
    appl(prod(_, cf(seq(_)), _), args) -> ""#(args)

  Tuple : 
    appl(prod(_, seq(_), _), args) -> ""#(args)         
\end{code}
	
	\paragraph{Conc to Cons}

	SDF2 lists are composed by means of a binary concatenation
	operator (\verb|A+ A+ -> A+|) that we translated to
	\verb|Conc| above. In abstract syntax trees we want to
	represent lists by \verb|Cons/Nil| structures. The following
	rules achieve this transformation.

\begin{code}
rules

  CTC0 : Snoc(x, y) -> Conc(x, Ins(y))
  CTC0 : [x | y] -> Conc(Ins(x), y)

  CTC1 : Conc(Conc(x, y), z) -> Conc(x, Conc(y, z))

  CTC1 : Conc( Conc( a, b, c ), d, e) ->
         Conc( a, b, Conc( c, d, e ) )
  CTC2 : Conc( x, y, z ) -> <concat>[x,[y],z]

  CTC1 : Conc([], x) -> x
  CTC1 : Conc(x, []) -> x

  CTC2 : Conc(Ins(x), []) -> [x]
  CTC2 : Conc(Ins(x), Ins(y)) -> [x, y]
  CTC2 : Conc(Ins(x), [y | z]) -> [x, y | z]

  CTC3 : Ins(x) -> [x]

  CTC4 : Conc([x | y], z) -> Conc(Ins(x), Conc(y, z))

signature
  constructors
    Ins  : a -> List(a)
    Conc : List(a) * List(a) -> List(a)
    Conc : List(a) * List(a) * List(a) -> List(a)

    Snoc : List(a) * a -> List(a)

    position : a * List(b) -> a

strategies

  conc-to-cons = 
    rec x(repeat(CTC0 + CTC1 + Conc(CTC0, id)); 
          (Conc(id, x) <+ all(x)); 
          try(CTC2; Cons(x, id) + CTC3))
\end{code}

