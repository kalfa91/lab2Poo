#include "CamionBleu.h"



CamionBleu::CamionBleu()
{
	Dechet::memoire++;
}

CamionBleu::CamionBleu(int _maxCapacite)
{
	Dechet::memoire++;

	maxCapacite = _maxCapacite;
	capacite = 0;
}

CamionBleu::~CamionBleu() 
{
	Dechet::memoire--;
}

bool CamionBleu::ajouterDechet(DechetTraiteRecyclable* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push((DechetTraite*)_dechetTraite);
		return true;
	}
	else
		return false;
}