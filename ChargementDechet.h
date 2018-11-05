#ifndef CHARGEMENTDECHET_H
#define CHARGEMENTDECHET_H

#include "Dechet.h"
#include "Compteur.h"
class ChargementDechet
{
public:
	ChargementDechet(std::list <Dechet*>* listeDechets);
	~ChargementDechet();
	Dechet* getDechet();
private:
	std::list<Dechet*> listeDechets;
};

#endif

