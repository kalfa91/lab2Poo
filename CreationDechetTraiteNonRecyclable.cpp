#include "CreationDechetTraiteNonRecyclable.h"



CreationDechetTraiteNonRecyclable::CreationDechetTraiteNonRecyclable(UsineTraitement* usineTraitement)
{
	Dechet::memoire++;

	this->usineTraitement = usineTraitement;
}


CreationDechetTraiteNonRecyclable::~CreationDechetTraiteNonRecyclable()
{
	Dechet::memoire--;
}

bool CreationDechetTraiteNonRecyclable::effectuerOperation(Dechet* dechet)
{
	creerDechetTraiteCompostable(dechet);
	return true;
}