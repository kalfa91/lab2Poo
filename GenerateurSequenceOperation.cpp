#include "GenerateurSequenceOperations.h"

GenerateurSequenceOperations::GenerateurSequenceOperations()
{
	Dechet::memoire++;
}


GenerateurSequenceOperations::~GenerateurSequenceOperations()
{
	Dechet::memoire--;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence(int id, UsineTraitement* usineTraitement)
{
	SequenceOperations* sequenceOperation = new SequenceOperations;
	CreationDechetTraiteCompostable* dc = new CreationDechetTraiteCompostable(usineTraitement);
	CreationDechetTraiteNonRecyclable* dnr = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteRecyclable* dr = new CreationDechetTraiteRecyclable(usineTraitement);
	Operation6* op6 = new Operation6(dnr, dr);
	Operation5* op5 = new Operation5(dc, dnr);
	Operation4* op4 = new Operation4(dc, op5);
	Operation3* op3 = new Operation3(dr, op4);
	Operation2* op2 = new Operation2(op6, op3);
	Operation1* op1 = new Operation1(dnr, op2);
	sequenceOperation->definirOperationDemarage(op1);

	delete op6;
	delete dc;

	return sequenceOperation;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence0(UsineTraitement* usineTraitement)
{
	SequenceOperations* sequenceOperation = new SequenceOperations;
	CreationDechetTraiteCompostable* dc = new CreationDechetTraiteCompostable(usineTraitement);
	CreationDechetTraiteNonRecyclable* dnr = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteRecyclable* dr = new CreationDechetTraiteRecyclable(usineTraitement);
	Operation1* op1 = new Operation1(dnr, new Operation2(new Operation6(dnr, dr), new Operation3(dr, new Operation4(dc, new Operation5(dc, dnr)))));
	sequenceOperation->definirOperationDemarage(op1);

	return sequenceOperation;
}

SequenceOperations* GenerateurSequenceOperations::genererSequence1(UsineTraitement* usineTraitement)
{
	SequenceOperations* sequenceOperation = new SequenceOperations;
	CreationDechetTraiteCompostable* dc = new CreationDechetTraiteCompostable(usineTraitement);
	CreationDechetTraiteNonRecyclable* dnr = new CreationDechetTraiteNonRecyclable(usineTraitement);
	CreationDechetTraiteRecyclable* dr = new CreationDechetTraiteRecyclable(usineTraitement);
	Operation1* op1 = new Operation1(dnr, new Operation2(new Operation6(dnr, dr), new Operation3(dr, new Operation4(dc, new Operation5(dc, dnr)))));
	sequenceOperation->definirOperationDemarage(op1);

	return sequenceOperation;
}
