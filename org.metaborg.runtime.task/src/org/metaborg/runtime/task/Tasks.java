package org.metaborg.runtime.task;

import java.util.HashSet;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

import com.google.common.collect.Multimap;

import static com.google.common.collect.Sets.filter;
import static com.google.common.collect.Maps.filterKeys;
import static com.google.common.collect.Multimaps.filterValues;

import static com.google.common.base.Predicates.in;
import static com.google.common.base.Predicates.not;
import static com.google.common.base.Predicates.or;

public class Tasks {

	private final ITermFactory factory;

	/** Instructions of tasks. */
	private final Map<IStrategoInt, IStrategoTerm> toInstruction = new ConcurrentHashMap<IStrategoInt, IStrategoTerm>();
	
	/** Origin partitions of tasks. */
	private final ManyToManyMap<IStrategoInt, IStrategoString> toPartition = ManyToManyMap.create();
	
	/** Dependencies between tasks. */
	private final ManyToManyMap<IStrategoInt, IStrategoInt> toDependency = ManyToManyMap.create();
	
	/** Solutions of tasks. */
	private final Map<IStrategoInt, IStrategoList> toResult = new ConcurrentHashMap<IStrategoInt, IStrategoList>();

	
	/** All tasks (view). */
	private final Set<IStrategoInt> tasks = toInstruction.keySet();
	
	/** Task is garbage, if it is has no partition anymore (view). */
	private final Set<IStrategoInt> garbage = filter(tasks, not(in(toPartition.keys())));
	
	/** Solved tasks (view). */
	private final Set<IStrategoInt> solved = toResult.keySet();
	
	/** Unsatisfied dependencies between tasks (view) */
	private final Multimap<IStrategoInt, IStrategoInt> toOpenDependency = filterValues(toDependency, not(in(solved)));
	
	/** Task is solvable, if it is neither solved, nor has any unsatisfied dependency (view). */
	private final Map<IStrategoInt, IStrategoTerm> toSolvableInstruction = filterKeys(toInstruction,
		not(or(in(solved), in(toOpenDependency.keys()))));
	
	/** solved task is invalid, if it has a dependency on an unsolved task (view). */
	private final Set<IStrategoInt> invalid = filter(solved, in(filterValues(toDependency, not(in(solved))).keySet()));

	
	/** New tasks that have been added since last call to {@link #startCollection(IStrategoString)}. */
	private final Set<IStrategoInt> addedTasks = new HashSet<IStrategoInt>();
	
	/** Tasks that have been removed when calling {@link #stopCollection(IStrategoString)}. */
	private final Set<IStrategoInt> removedTasks = new HashSet<IStrategoInt>();
	
	/** True if collection is in progress, false otherwise. */
	private boolean inCollection = false;
	

	public Tasks(ITermFactory factory) {
		this.factory = factory;
	}

	public void startCollection(IStrategoString partition) {
		addedTasks.clear();
		removedTasks.clear();
		removedTasks.addAll(toPartition.getInverse(partition));
		inCollection = true;
	}

	public IStrategoInt addTask(IStrategoString partition, IStrategoList dependencies, IStrategoTerm instruction) {
		if(!inCollection)
			throw new IllegalStateException(
				"Collection has not been started yet. Call startCollection before adding tasks.");
		
		IStrategoInt taskID = factory.makeInt(instruction.hashCode());
		if(toInstruction.put(taskID, instruction) == null)
			addedTasks.add(taskID);
		removedTasks.remove(taskID);

		toPartition.put(taskID, partition);
		for(IStrategoTerm dep : dependencies.getAllSubterms())
			toDependency.put(taskID, (IStrategoInt) dep);

		return taskID;
	}

	public IStrategoTuple stopCollection(IStrategoString partition) {
		for(IStrategoInt removed : removedTasks)
			toPartition.remove(removed, partition);

		collectGarbage();

		return factory.makeTuple(factory.makeList(addedTasks), factory.makeList(removedTasks));
	}

	public void evaluate() {
		invalid.clear();
		for(Entry<IStrategoInt, IStrategoTerm> solvable : toSolvableInstruction.entrySet())
			addResult(solvable.getKey(), solve(solvable.getValue()));
	}

	public IStrategoList solve(IStrategoTerm instruction) {
		return null;
	}

	public void addResult(IStrategoInt taskID, IStrategoList resultList) {
		toResult.put(taskID, resultList);
	}

	public IStrategoList getResult(IStrategoInt taskID) {
		return toResult.get(taskID);
	}

	private void collectGarbage() {
		tasks.removeAll(garbage);
		solved.removeAll(garbage);
		toDependency.removeAll(garbage);
	}
}