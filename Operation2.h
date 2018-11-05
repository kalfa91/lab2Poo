#ifndef OPERATION2_H
#define OPERATION2_H

#include "Operation.h"
class Operation2 :
	public Operation
{
public:
	Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation2();
	virtual bool effectuerOperation(Dechet* dechet);
};

#endif
