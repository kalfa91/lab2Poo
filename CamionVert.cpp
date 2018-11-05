#include "CamionVert.h"



CamionVert::CamionVert()
{
	Dechet::memoire++;
}

CamionVert::CamionVert(int _maxCapacite)
{
	Dechet::memoire++;
	maxCapacite = _maxCapacite;
	capacite = 0;
}

CamionVert::~CamionVert()
{
	Dechet::memoire--;
}

bool CamionVert::ajouterDechetTraite(DechetTraiteNonRecyclable* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push((DechetTraite*)_dechetTraite);
		return true;
	}
	else
		return false;
}
