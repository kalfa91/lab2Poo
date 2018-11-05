#include "DechetTraiteNonRecyclable.h"



DechetTraiteNonRecyclable::DechetTraiteNonRecyclable(Dechet* dechet)
{
	Dechet::memoire++;

	this->dechet = dechet;
}


DechetTraiteNonRecyclable::~DechetTraiteNonRecyclable()
{
	Dechet::memoire--;
}
