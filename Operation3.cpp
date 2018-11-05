#include "Operation3.h"



Operation3::Operation3(Operation* _operationSuivanteTrue, Operation* _operationSuivanteFalse)
{
	Dechet::memoire++;

	operationSuivanteFalse = _operationSuivanteFalse;
	operationSuivanteTrue = _operationSuivanteTrue;
}


Operation3::~Operation3()
{
	Dechet::memoire--;
}

bool Operation3::effectuerOperation(Dechet* dechet)
{

	if (dechet->getMateriel() == 0 || dechet->getMateriel() == 7)
		return true;
	else
		return false;
}
