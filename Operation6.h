#ifndef OPERATION6_H
#define OPERATION6_H

#include "Operation.h"

class Operation6 :
	public Operation
{
public:
	Operation6(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation6();
	virtual bool effectuerOperation(Dechet* dechet);
};

#endif

