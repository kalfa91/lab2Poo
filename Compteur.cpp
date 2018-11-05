#include "Compteur.h"

int Compteur::constructeur;
int Compteur::constructeurCopie;
int Compteur::destructeur;
Compteur::Compteur()
{
}

Compteur::~Compteur()
{
	destructeur++;
}

void Compteur::ajouterConstructeur()
{
	constructeur++;
}

void Compteur::ajouterConstructeurCopie()
{
	constructeurCopie++;
}

void Compteur::ajouterDestructeur()
{
	destructeur++;
}

int Compteur::getNbConstructeurs()
{
	return constructeur;
}

int Compteur::getNbConstructeursCopie()
{
	return constructeurCopie;
}

int Compteur::getNbDestructeurs()
{
	return destructeur;
}
