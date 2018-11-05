#include "SequenceOperations.h"



SequenceOperations::SequenceOperations()
{
	Dechet::memoire++;
}


SequenceOperations::~SequenceOperations()
{
	Dechet::memoire--;
}

SequenceOperations* SequenceOperations::ajouterOperation(Operation* operation)
{
	return NULL;
}

void SequenceOperations::definirOperationDemarage(Operation* operation)
{
	operationDemarage = operation;
}

Operation* SequenceOperations::getOperationDemarage()
{
	return operationDemarage;
}