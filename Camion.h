#ifndef CAMION_H
#define CAMION_H

#include <stack>
#include "DechetTraite.h"
#include "Compteur.h"

class Camion
{
public:
	Camion();
	Camion(int _maxCapacite);
	~Camion();
	bool ajouterDechet(DechetTraite* _dechetTraite);
	int viderCamion();

protected:
	int maxCapacite;
	int capacite;
	std::stack <DechetTraite*> pileDechets;


};

#endif