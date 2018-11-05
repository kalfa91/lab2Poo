#include "DechetTraite.h"


DechetTraite::DechetTraite()
{
	Dechet::memoire++;
}


DechetTraite::DechetTraite(Dechet* dechet)
{
	Dechet::memoire++;
	this->dechet = dechet;
}


DechetTraite::~DechetTraite()
{
	Dechet::memoire--;
}
