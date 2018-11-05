#include "DechetTraiteCompostable.h"



DechetTraiteCompostable::DechetTraiteCompostable(Dechet* dechet)
{
	Dechet::memoire++;

	this->dechet = dechet;
}


DechetTraiteCompostable::~DechetTraiteCompostable()
{
	Dechet::memoire--;
}
