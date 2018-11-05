#include "Operation5.h"



Operation5::Operation5(Operation* _operationSuivanteTrue, Operation* _operationSuivanteFalse)
{
	Dechet::memoire++;

	operationSuivanteFalse = _operationSuivanteFalse;
	operationSuivanteTrue = _operationSuivanteTrue;
}


Operation5::~Operation5()
{
	Dechet::memoire--;
}

bool Operation5::effectuerOperation(Dechet* dechet)
{

	if (dechet->getMateriel() == 6 && dechet->getCouleur() == "vert")
		return true;
	else
		return false;
}