module test17
imports sunit
signature
  constructors
    A : Term
    B : Term
    F : Term * Term * Term -> Term

overlays

  F(x,y) = F(x, A, y)

strategies

  main = 
    test-suite(!"test17",
	test1
    )

  test1 =
    apply-test(!"test1a"
	, F(!B,!A)
	, !F(A,A,A)
	, !F(B,A,A)
	);
    apply-test(!"test1b"
	, ?F(x,y)
	, !F(A,A,A)
	, !F(A,A,A)
	);
    apply-test(!"test1c"
	, !F(B,A)
	, !()
	, !F(B,A,A)
	)

