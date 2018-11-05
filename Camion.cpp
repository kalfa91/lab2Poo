#include "Camion.h"


Camion::Camion()
{
	Dechet::memoire++;
}


Camion::Camion(int _maxCapacite)
{
	Dechet::memoire++;

	maxCapacite = _maxCapacite;
	capacite = 0;
}


Camion::~Camion()
{
	Dechet::memoire--;
}

bool Camion::ajouterDechet(DechetTraite* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		capacite++;
		pileDechets.push(_dechetTraite);
		return true;
	}
	else
		return false;
}

int Camion::viderCamion()
{
	Dechet* dechet;
	int poidTotal = 0;
	while (!(pileDechets.empty()))
	{
		dechet = (Dechet*)pileDechets.top();
		poidTotal += dechet->getPoids();
		pileDechets.pop();

		delete dechet;
	}
	capacite = 0;
	return poidTotal;
}