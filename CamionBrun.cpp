#include "CamionBrun.h"



CamionBrun::CamionBrun()
{
	Dechet::memoire++;
}

CamionBrun::CamionBrun(int _maxCapacite)
{
	Dechet::memoire++;

	maxCapacite = _maxCapacite;
	capacite = 0;
}

CamionBrun::~CamionBrun()
{
	Dechet::memoire--;
}

bool CamionBrun::ajouterDechetTraite(DechetTraiteCompostable* _dechetTraite)
{
	if (capacite < maxCapacite)
	{
		pileDechets.push((DechetTraite*)_dechetTraite);
		return true;
	}
	else
		return false;
}