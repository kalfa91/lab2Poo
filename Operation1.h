#ifndef OPERATION1_H
#define OPERATION1_H

#include "Operation.h"

class Operation1 : 
	public Operation
{
public:
	Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation1();
	virtual bool effectuerOperation(Dechet* dechet);
};

#endif
