#include "CreationDechetTraiteRecyclable.h"



CreationDechetTraiteRecyclable::CreationDechetTraiteRecyclable(UsineTraitement* usineTraitement)
{
	Dechet::memoire++;

	this->usineTraitement = usineTraitement;
}


CreationDechetTraiteRecyclable::~CreationDechetTraiteRecyclable()
{
	Dechet::memoire--;
}

bool CreationDechetTraiteRecyclable::effectuerOperation(Dechet* dechet)
{
	creerDechetTraiteRecyclable(dechet);
	return true;
}
