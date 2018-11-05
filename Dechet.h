#ifndef DECHET_H
#define DECHET_H

#include <iostream>
#include <string>
#include <list>
#include "Compteur.h"
class Dechet
{ 

public:
	static int memoire;

	enum Materiel
	{
		CARTON,
		BOUTEILLE,
		PLASTIQUE,
		METAL,
		BOIS,
		NOURRITURE,
		VEGETAL,
		PAPIER,
		STYROMOAF,
		INCONNU
	};
private:


	int poids;
	int id;
	std::string description;
	int type;
	std::string couleur;
	Materiel materiel;
	int purete;
	bool styromousse;
	bool rigide;

	void setPoids(int poids);
	void setDescription(std::string description);
	void setType(int type);
	void setCouleur(std::string couleur);
	void setPurete(int purete);


public:

	Dechet();
	~Dechet();

	static int idCourant;

	int getPoids() const { return poids; }
	int getId() const { return id; }
	std::string getDescription() const { return description; }
	int getType() const { return type; }
	std::string getCouleur() const { return couleur; }
	Materiel getMateriel() const { return materiel; }
	int getPurete() const { return purete; }
	bool estEnStyromousse() const { return styromousse; }
	bool estRigide() const { return rigide; }
	Dechet(int poids, std::string description, int type, std::string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide);

protected:
	Dechet(int poids, std::string description);
};



std::ostream &operator<<(std::ostream &out, Dechet const &dechet);

#endif