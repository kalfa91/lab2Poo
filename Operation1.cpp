#include "Operation1.h"



Operation1::Operation1(Operation* _operationSuivanteTrue, Operation* _operationSuivanteFalse)
{
	Dechet::memoire++;

	operationSuivanteFalse = _operationSuivanteFalse;
	operationSuivanteTrue = _operationSuivanteTrue;
}


Operation1::~Operation1()
{
	Dechet::memoire--;
}

bool Operation1::effectuerOperation(Dechet* dechet)
{

	if (dechet->estEnStyromousse() || dechet->estRigide())
		return true;
	else 
		return false;
}