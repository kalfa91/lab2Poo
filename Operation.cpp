#include "Operation.h"



Operation::Operation()
{
	Dechet::memoire++;

	operationSuivanteFalse = NULL;
	operationSuivanteTrue = NULL;
}


Operation::~Operation()
{
	Dechet::memoire--;
}

Operation::Operation(Operation* _operationSuivanteTrue, Operation* _operationSuivanteFalse)
{
	Dechet::memoire++;

	operationSuivanteFalse = _operationSuivanteFalse;
	operationSuivanteTrue = _operationSuivanteTrue;
}

bool Operation::effectuerOperation(Dechet* dechet)
{
	return 0;
}

Operation* Operation::getOperationSuivante(bool choix)
{
	if (choix == true)
		return operationSuivanteTrue;
	else
		return operationSuivanteFalse;
}