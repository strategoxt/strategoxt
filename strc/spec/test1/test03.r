module test3
imports list-cons tuple-cons
signature
  constructors
    Nil   : List(a)
    Cons  : a * List(a) -> List(a)
    Call  : a * List(a) -> Call

rules

  split(f, g) : x -> (<f> x, <g> x)

strategies

  main = 
    ?[prog | args];
    split(!Call(prog, args), id)
