package org.strategoxt.strj.util;

import java.util.Comparator;

import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.Term;

public class Unify_and_sort_Signatures extends Abstract_Unify_and_sort {

	public Unify_and_sort_Signatures() {
		super("Unify_and_sort_Signatures");
	}
	
	private IStrategoTerm unwrapAnnoDef(IStrategoTerm term) {
		if (Term.tryGetConstructor(term).getName().equals("AnnoDef")) {
			return term.getSubterm(1);
		}
		return term;
	}
	
	private Comparator<IStrategoTerm> signatureComparator = new Comparator<IStrategoTerm>() {
		@Override
		public int compare(IStrategoTerm o1, IStrategoTerm o2) {
			try {
			// Ignore AnnoDefs for comparing: This is not a problem because for externals no problem
		// because there are no AnnoDefs and SDefs will only be removed, if they are annotated by regular stratego annotations
				// but AnnoDefs do not get such ones
			o1 = unwrapAnnoDef(o1);
			o2 = unwrapAnnoDef(o2);
			String name1 = Term.asJavaString(Term.termAt(o1, 0));
			String name2 = Term.asJavaString(Term.termAt(o2, 0));
			
			int nameComp = name1.compareTo(name2);
			if (nameComp != 0) {
				return nameComp;
			}
			int numSVars1 = ((IStrategoList)Term.termAt(o1, 1)).size();
			int numSVars2 = ((IStrategoList)Term.termAt(o2, 1)).size();
			int svarsComp = Integer.compare(numSVars1, numSVars2);
			if (svarsComp != 0) {
				return svarsComp;
			}
			int numTVars1 = ((IStrategoList)Term.termAt(o1, 2)).size();
			int numTVars2 = ((IStrategoList)Term.termAt(o2, 2)).size();
			
			int numTVarsComp = Integer.compare(numTVars1, numTVars2);
			return numTVarsComp;
			}catch (RuntimeException e) {
				System.out.println("Failed for o1 " + o1);
				System.out.println("Failed for o2 " + o2);
				throw e;
			}
		}
	};

	@Override
	protected Comparator<IStrategoTerm> getSortComparator() {
		return new Comparator<IStrategoTerm>() {

			@Override
			public int compare(IStrategoTerm o1, IStrategoTerm o2) {
				int signatureComp = signatureComparator.compare(o1, o2);
				if (signatureComp != 0) {
					return signatureComp;
				}
				IStrategoList annos1 = o1.getAnnotations();
				IStrategoList annos2 = o2.getAnnotations();
				
				return Integer.compare(annos1.size(), annos2.size());
			}
		};
	}
	
	@Override
	protected Comparator<IStrategoTerm> getUnifyComparator() {
		return new Comparator<IStrategoTerm>() {
			@Override
			public int compare(IStrategoTerm o1, IStrategoTerm o2) {
				int signatureComp = signatureComparator.compare(o1, o2);
				if (signatureComp != 0) {
					return signatureComp;
				}
				IStrategoList annos1 = o1.getAnnotations();
				IStrategoList annos2 = o2.getAnnotations();
				
				int annoComp = Integer.compare(annos1.size(), annos2.size());
				if (annoComp != 0) {
					return annoComp;
				}
				if (annos1.size() == 0) {
					return -1;
				} else {
					return 0;
				}
			}
		};
	}

}