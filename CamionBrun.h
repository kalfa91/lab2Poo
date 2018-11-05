#ifndef CAMIONBRUN_H
#define CAMIONBRUN_H

#include "Camion.h"
#include "DechetTraiteCompostable.h"
#include "Compteur.h"

class CamionBrun :
	public Camion
{
public:
	CamionBrun();
	CamionBrun(int _maxCapacite);
	~CamionBrun();
	bool ajouterDechetTraite(DechetTraiteCompostable* _dechetTraite);
};

#endif