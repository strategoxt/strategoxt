\literate[list-basic]

	\begin{abstract}

	Basic functionality on lists. 

	\end{abstract}

	Map: Apply strategy to each element of a list

	Length of a list

	Fetch: Find first list element for which s succeeds

	At tail: apply a strategy to the tail of a list

	At suffix: apply a strategy to some suffix of a list

\begin{code}
module list-basic
imports list-cons
rules
  Hd     : [x | l] -> x
  Tl     : [x | l] -> l
  Last   : [x] -> x
  MkCons : (x, xs) -> [x | xs]
  MkSingleton = ![<id>]
strategies

  is-list = ?[] + ?[_ | _]

  map(s) = 
    rec x([] + [s | x]) 

  list(s) = 
    rec x([] + [s | x])

  list-some(s) =
    rec x([s| id] < [id| list(try(s))] + [id| x])

  list-some-filter(s) =
    rec x([s| id]; [id| filter(s)] <+ [id| x]; Tl)

  length = 
    foldr(!0, add, !1)

  // :: a * List(a) -> fail?
  elem = elem(eq)
  
  // a * a -> fail? :: a * List(a) -> fail?
  elem(eq) =
    ?(x, <id>); one(where(<eq> (x, <id>)))

  fetch(s) = 
    rec x([s | id] <+ [id | x])

  fetch-elem(s) = 
    fetch(s;?x);!x

  // split-fetch, splits a list in two at the point 
  // where the argument strategy succeeds.

  split-fetch(s) =
    at-suffix([s|id];[id|?tl];![]); !(<id>, tl)

  at-tail(s) = 
    [id | s]

  at_tail(s) = 
    obsolete(!"at_tail -> at-tail");
    at-tail(s)

  at-end(s) = 
    rec x([id | x] + []; s)
  at_end(s) = 
    obsolete(!"at_end -> at-end");
    rec x([id | x] + []; s)

  at-suffix(s) = 
    rec x(s <+ [id | x])
  at_suffix(s) = 
    obsolete(!"at_suffix -> at-suffix");
    rec x(s <+ [id | x])

  at_last(s) = 
    obsolete(!"at_last -> at-last");
    at-last(s)  

  at-last(s) = 
    rec x([id]; s <+ [id | x])

  split-init-last = 
    at-last(?[x]; ![]); !(<id>, x)

  at-init(s1, s2) =
    rec x([s2] <+ [s1 | x])

  listbu(s) = 
    rec x(([] + [id| x]); s)

  listtd(s) = 
    rec x(s; ([] + [id| x]))

  listdu(s) =
    rec x(s; ([] + [id| x]); s)

  listdu2(s1, s2) = 
    rec x(s1; ([] + [id| x]); s2)

  RevInit : xs -> (xs, [])
  Rev     : ([x| xs], ys) -> (xs, [x| ys])
  RevExit : ([], ys) -> ys

  reverse = 
    reverse-acc(id, ![])

  reverse(s) = 
    reverse-acc(s, ![])

  reverse-acc(s, acc) : 
    [] -> <acc>()

  reverse-acc(s, acc) : 
    [x | xs] -> <{ys:where(![<s>x | <acc>] => ys); reverse-acc(s, !ys)}> xs

rules

  UptoInit : i -> (i, [])
  UptoExit : (i, xs) -> xs where <lt> (i, 0)
  UptoStep : (i, xs) -> (<subt> (i, 1), [i| xs])

strategies

  upto = UptoInit; rec x(UptoExit <+ UptoStep; x)

rules

  conc : (l1, l2) -> <at-end(!l2)> l1
  //Concat(x) : [l | ls] -> <at-end(<x> ls)> l

strategies

  concat = rec x([] + \ [l | ls] -> <at-end(<x> ls)> l\ )

rules

  Sep(s) : [x| xs] -> [<s>(), x | xs]

strategies

  separate-by(s) = 
    [] + [id| rec x([] + [id| x]; Sep(s))]
\end{code}

% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
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
