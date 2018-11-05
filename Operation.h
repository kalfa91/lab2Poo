#ifndef OPERATION_H
#define OPERATION_H

#include "DechetTraite.h"


class Operation
{
protected:
	Operation();
public:
	Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	virtual ~Operation();
	virtual bool effectuerOperation(Dechet* dechet);
	Operation* getOperationSuivante(bool choix);
protected:
	Operation* operationSuivanteTrue;
	Operation* operationSuivanteFalse;

};

#endif

