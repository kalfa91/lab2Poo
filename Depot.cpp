#include "Depot.h"
#include "Compteur.h"



Depot::Depot()
{
	Compteur::ajouterConstructeur();
	Dechet::memoire++;
}


Depot::~Depot()
{
	Dechet::memoire--;
}

CamionBleu * Depot::getCamionBleu() const
{
	Camion* camionBleu = new Camion(40); 
	return (CamionBleu*)camionBleu; 
}

CamionVert * Depot::getCamionVert() const
{
	Camion* camionVert = new Camion(40); 
	return (CamionVert*)camionVert; 
}

CamionBrun * Depot::getCamionBrun() const
{
	Camion* camionBrun = new Camion(40); 
	return (CamionBrun*)camionBrun; 
}

void Depot::depotDechetsTraites(CamionVert* _camion)
{
	totalDTNonRecyclable += _camion->viderCamion();
}
void Depot::depotDechetsTraites(CamionBleu* _camion)
{
	totalDTRecyclable += _camion->viderCamion();
}
void Depot::depotDechetsTraites(CamionBrun* _camion)
{
	totalDTCompostable += _camion->viderCamion();
}

std::ostream & operator<<(std::ostream & out, Depot const & depot)
{
	out << "-- DEPOT --" << std::endl
		<< " totalDTRecyclable    : " << depot.getCamionBleu() << std::endl
		<< " totalDTNonRecyclable : " << depot.getCamionVert() << std::endl
		<< " totalDTCompostable   : " << depot.getCamionBrun() << std::endl;

	return out;
}
