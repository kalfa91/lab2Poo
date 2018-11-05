#include "UQAC.h"



UQAC::UQAC()
{
	Dechet::memoire++;
}
 

UQAC::~UQAC()
{
	Dechet::memoire--;
}

ChargementDechet * UQAC::getChargementDechets() const
{
	std::list<Dechet*> listeDechet;
	for (int i = 0; i < 10; i++)
	{
		Dechet* dechet1 = new Dechet(8, "Ramette de papier", 0, "blanc", Dechet::Materiel::PAPIER, 36, false, false);
		Dechet* dechet2 = new Dechet(56, "Bitonio", 0, "vert", Dechet::Materiel::BOUTEILLE, 1, false, true);
		Dechet* dechet3 = new Dechet(23, "Bidule", 0, "vert", Dechet::Materiel::STYROMOAF, 68, true, false);
		Dechet* dechet4 = new Dechet(95, "Quelque chose", 0, "brun", Dechet::Materiel::VEGETAL, 91, false, true);
		Dechet* dechet5 = new Dechet(72, "Machin truc", 0, "rose", Dechet::Materiel::INCONNU, 66, false, false);


		listeDechet.push_back(dechet1);
		listeDechet.push_back(dechet2);
		listeDechet.push_back(dechet3);
		listeDechet.push_back(dechet4);
		listeDechet.push_back(dechet5);
	}
	
	ChargementDechet* cd = new ChargementDechet(&listeDechet);

	return cd;
}
