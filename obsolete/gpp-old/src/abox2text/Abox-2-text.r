\literate[Abox-2-text]
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
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

% $Id: Abox-2-text.r,v 1.3 2002/05/19 14:07:54 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

% Eelco Visser (April 5, 2001)
% - repaired bug in handling of H boxes
% - refactored handling of H case using thread-map

This is a simple abox to text converter. It only formats H and V boxes. For
the remaining box operators the following transformations are applied:

A          -> V
R          -> H
HV         -> H
ALT(a1,a2) -> a1

\begin{code}
module Abox-2-text

imports pp-tables lib Literal-lib

strategies

  Abox-2-text = 
    parse-options(  io-options )  => options;
    (
       need-help( usage )
    <+
       where(option-defined(?Output(outfile));<open-file>outfile <+ !stdout => outfile);
       input-file;
       (id, abox2text => b);!b; 
       topdown(try(is-string; 
                   where(!(outfile, [<id>]); print )));
       <print>(outfile, ["\n"]);
       report-success
    <+
       report-failure
    )

usage =
       where(option-defined(?Program(prog));
             <printnl>
             (stderr,
              ["usage : ", prog, 
               " [-i abox] [-o html] [--help|-h|-?]"]);
             <exit> 0)

abox2text = 
   split(id,!0);
   Abox2text

(*
Abox2text =
   ?(H(sopt, xs), xpos)
   ; <Hspace>sopt => hs
   ; <string-length>hs => hsl
   ; !(<filter(not([] + H([],[])))> xs, xpos)
   ; rec x(([],id)
        <+ {s, xpos2: 
            \ ([b], xpos1) -> ([s], xpos2)
              where <Abox2text>(b, xpos1) => (s, xpos2) \ }
        <+ {s, ss, xpos2,xpos3 : 
            \ ([b|bs], xpos1) -> ([s|ss], xpos3)
             where <Abox2text>(b, xpos1) => (s, xpos2);
                   <x>(bs, <add>(hsl, xpos2)) => (ss, xpos3) \ } 
        )
   ; (separate-by(!hs), id)
*)

  Abox2text =
   ?(H(sopt, xs), xpos) 
   ; <Hspace> sopt => hs
   ; <string-length> hs => hsl
   ; !Pair(<filter(not([] + H([],[])))> xs, xpos)
   ; thread-map({s, xpos': 
                 \ (b, xpos) -> (s, <add>(hsl, xpos'))
                   where <Abox2text> (b, xpos) => (s, xpos')\ })
   ; ?(zs, xpos2)
   ; !(<separate-by(!hs)> zs, xpos2)
   ; try((not([]), \ xpos -> <subt> (xpos, hsl)\ ))

  //Abox2text =
  //   ?HV(_, xs );
  //   <separate-by(!" ")>xs

  Abox2text =
    ?(V(sopt, xs ), xpos)
  ; <Vspace>sopt => vs
  ; <Ispace>sopt => is
  ; <string-length>is => isl
  ; <concat-strings>[vs, is, <copy-char>(xpos, 32)] => vsep
  ; !xs
  ; filter(not([]));
    ( [];!([], xpos)
    + [\ x -> <Abox2text>(x, xpos) \ 
       | map( \ x -> <Abox2text>(x, <add>(xpos, isl)) \ )]
      ; at-last( [?(_,xpos')] )
      ; map(Fst)
      ; separate-by(!vsep)
      ; split(id, !xpos')
    )

  Abox2text :
    (S(s), xpos) -> (s, <add>(xpos, <string-length'(!xpos)>s))

  Abox2text :
    (C(_,[S(s)]), xpos) -> (s, xpos)

  Abox2text :
    (FBOX(_,b), xpos) -> <Abox2text>(b, xpos)

  Abox2text :
    (HV(sopt, bs), xpos) -> <Abox2text> (H(sopt, bs), xpos)

  Abox2text :
    (R(sopt, bs), xpos) -> <Abox2text> (H(sopt, bs), xpos) 

  Abox2text :
    (A(_,sopt, bs), xpos) -> <Abox2text> (V(sopt, <map-to-r-box>bs), xpos) 
      
  Abox2text :
    (ALT( a1, a2), xpos) -> <Abox2text> (a1, xpos)

  Abox2text :
    ([x], xpos) -> <Abox2text> (x, xpos)

  Abox2text :
    ([], xpos) -> ("", xpos)

strategies
  // Make sure that all arguments of an A box are R boxes. Put boxes
  // into new R boxes when needed
  map-to-r-box =
     ?xs;
     !( xs, [], [] );
     rec s ({ a1, a2, x, xs, ys, zs:
        ?( [], [], zs ); !zs
     <+
        ?( [], ys, zs ) ; <conc>(zs, [R([], ys)])
     <+
        ?( [R(a1, a2)| xs], [], zs ) ;
         <s>(xs, [], <conc>(zs, [R(a1,a2)]) )
     <+
        ?( [R(a1, a2)| xs], ys, zs ) ;
        <s>( xs, [], <conc>(zs, [R([], ys), R(a1, a2)]))
     <+
        ?( [x|xs], ys, zs );
        <s>( xs, <conc>(ys, [x]), zs )
     })
     
  // analysing space options

  Hspace =
    (fetch(SOpt(HS,?value));!value; string-to-int <+ !1)
  ; \ n -> <copy-char>(n, 32) \
   
  Vspace =
    (fetch(SOpt(VS,?value));!value; string-to-int <+ !0)
  ; \ n -> <copy-char>(<add>(n,1), 10) \

  Ispace =
    (fetch(SOpt(IS,?value)); !value; string-to-int <+ !0)
  ; \ n -> <copy-char>(n, 32) \


// Calculate relative string length. That is, by taking new lines and
// current horizontal position into account
//
// <string-length'(x)>"my_string" => 9
// <string-length'(x)>"my\nstring" => 6 - x
string-length'(xpos) =
    split-at(10);
    (
       [id];
       last;
       string-length
    <+
       last;
       string-length;
       split(id,xpos);
       subt
    )
    

split-at(s) =
   ?str;
   !(<explode-string;reverse>str, [], []);
   rec r ({x,xs,ys,zs:
      ?([], ys, zs); 
       ![ys|zs]
      <+
      ?([x|xs],ys,zs);
      <s>x;
      <r>(xs, [],[ys|zs])
      <+
      ?([x|xs],ys,zs);
      <r>(xs, [x|ys], zs)
   });
   map(implode-string)
\end{code}
