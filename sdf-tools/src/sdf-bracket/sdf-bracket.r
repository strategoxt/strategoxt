// SDF Tools
// Copyright (C) 2001 Merijn de Jonge <mdejonge@cwi.nl>
//                    Eelco Visser <visser@acm.org>
//                    Joost Visser <jvisser@cwi.nl>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.

\literate[sdf-bracket]

This is a simple utility that inserts brackets in the AST of SDF modules
such that:
   implode(parse(sdf-bracket(AST))) = AST

Currently this is implemented as follows:
* SDF infix operators  "alt", "pair", and sequence (represented as lists)
  are put inside a "bracket-symbol" in the context of nested SDF symbols
  iter, iter-star, opt, alt, and sequence (represented as list).

Example:
The AST for the symbol (A|B)* is
   iter-star(alt(sort("A"),sort("B")))
sdf-bracket transforms this AST into
   iter-star(bracket-symbol(alt(sort("A"),sort("B"))))

\begin{code}
module sdf-bracket
imports lib Regular-Sdf-Syntax Bracket-Symbol asfix termid

strategies
short-description(p) = !["Usage: ", <p>(), " [options]"]
long-description(p)  = !["This program generates a disambiguated AST of SDF modules\n",
                         "by inserting bracket symbols for SDF infix operators.\n",
                         "Use this program before pretty-printing ASTs of SDF modules.\n"]

  sdf-bracket = 
    io-idwrap(InOutId("\"sdf-2.1\"", !"\"sdf-2.1\""), SdfBracket)

  SdfBracket =
    topdown(try(Bracket));
    topdown(try(DeBracket))

  infix-op = alt(id, id) + pair(id,id) + is-list

rules

  Bracket :
    iter(s) -> iter(bracket-symbol(s)) where <infix-op>s

  Bracket :
    iter-star(s) -> iter-star(bracket-symbol(s)) where <infix-op>s

  Bracket :
    opt(s) -> opt(bracket-symbol(s)) where <infix-op>s

  Bracket :
    alt(s1, s2) -> alt(<try(infix-op;!bracket-symbol(s1))>s1, 
                       <try(not(alt(id,id));infix-op;!bracket-symbol(s2))>s2)

  // This rule is for sequences  which are represented as lists.
  Bracket :
     [x|xs] -> xs'
  where
     map( \s -> <try(infix-op;!bracket-symbol(s))>s \ ) => xs'


  // Remove inserted brackets for productions of the form
  //     prod( [lit(f), bracket-symbol(s)], sort, attrs) 
  // because after unparsing it corresponds to an SDF prod-fun (i.e., the
  // definition of a prefix function f(s) ).
  DeBracket :
    prod([lit(f), bracket-symbol(alt(s1,s2))],s,a) -> prod( [lit(f), alt(s1, s2)], s, a)
\end{code}
