#ifndef CAMIONVERT_H
#define CAMIONVERT_H

#include "Camion.h"
#include "DechetTraiteNonRecyclable.h"
#include "Compteur.h"

class CamionVert :
	public Camion
{
public:
	CamionVert();
	CamionVert(int _maxCapacite);
	~CamionVert();
	bool ajouterDechetTraite(DechetTraiteNonRecyclable* _dechetTraite);
};

#endif