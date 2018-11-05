#include "DechetTraiteRecyclable.h"



DechetTraiteRecyclable::DechetTraiteRecyclable(Dechet* dechet)
{
	Dechet::memoire++;

	this->dechet = dechet;
}


DechetTraiteRecyclable::~DechetTraiteRecyclable()
{
	Dechet::memoire--;
}
