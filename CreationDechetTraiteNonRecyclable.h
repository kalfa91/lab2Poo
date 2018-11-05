#ifndef CREATIONDECHETTRAITENONRECYCLABLE_H
#define CREATIONDECHETTRAITENONRECYCLABLE_H

#include "OperationTraitement.h"
#include "Compteur.h"

class CreationDechetTraiteNonRecyclable :
	public OperationTraitement
{
public:
	CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement);
	~CreationDechetTraiteNonRecyclable();
	bool effectuerOperation(Dechet* dechet);
};

#endif
