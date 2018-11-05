#ifndef OPERATION3_H
#define OPERATION3_H

#include "Operation.h"
class Operation3 :
	public Operation
{
public:
	Operation3(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	~Operation3();
	virtual bool effectuerOperation(Dechet* dechet);
};

#endif
