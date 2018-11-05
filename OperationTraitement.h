#ifndef OPERATIONTRAITEMENT_H
#define OPERATIONTRAITEMENT_H

#include "Operation.h"
#include "UsineTraitement.h"



class OperationTraitement :
	public Operation
{
public:
	OperationTraitement(UsineTraitement* usineTraitement);
	OperationTraitement();
	~OperationTraitement();
	bool effectuerOperation(Dechet* dechet);
protected:
	UsineTraitement* usineTraitement;
	void creerDechetTraiteRecyclable(Dechet* dechet);
	void creerDechetTraiteNonRecyclable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
};

#endif