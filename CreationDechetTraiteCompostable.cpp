#include "CreationDechetTraiteCompostable.h"



CreationDechetTraiteCompostable::CreationDechetTraiteCompostable(UsineTraitement* usineTraitement)
{
	Dechet::memoire++;

	this->usineTraitement = usineTraitement;
}


CreationDechetTraiteCompostable::~CreationDechetTraiteCompostable()
{
	Dechet::memoire--;
}

bool CreationDechetTraiteCompostable::effectuerOperation(Dechet* dechet)
{
	creerDechetTraiteCompostable(dechet);
	return true;
}