module test51
imports liblib
strategies

  main =
    test-suite(!"test51",
      test51-1
    )

  test51-1 =
    apply-test(!"test51-1"
	, ![<Fst> | <Snd>]
	, !("a", [])
	, !["a"]
	)

