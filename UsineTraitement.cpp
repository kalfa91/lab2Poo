#include "UsineTraitement.h"

UsineTraitement::UsineTraitement()
{
	Dechet::memoire++;

	camionVert = new CamionVert(10);
	camionBleu = new CamionBleu(10);
	camionBrun = new CamionBrun(10);
}


UsineTraitement::~UsineTraitement()
{
	Dechet::memoire--;
}

void UsineTraitement::chargerOperations(SequenceOperations* _sequenceOperations)
{
	sequenceOperations = _sequenceOperations;
}

void UsineTraitement::demarrerTraitements(ChargementDechet* chargement)
{
	Dechet* dechet;
	while ((dechet = chargement->getDechet()) != NULL)
	{
		traiterDechet(dechet);
	}
	this->camionBleu->viderCamion();
	this->camionBrun->viderCamion();
	this->camionVert->viderCamion();

	delete chargement;
}

void UsineTraitement::preOperation()
{
	Log log;
	log.i("PREOPERATION");
}
void UsineTraitement::postOperation()
{
	Log log;
	log.i("POSTOPERATION");
}
void UsineTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	Log log;
	int poid;
	if (camionBleu->ajouterDechet((DechetTraiteRecyclable*)dechet))
	{
		log.i("AJOUT DTR" + std::to_string(dechet->getId()));
	}
	else
	{
		poid = camionBleu->viderCamion();
		log.i("Camion bleu vide de " + std::to_string(poid) + "kg");
		camionBleu->ajouterDechet((DechetTraiteRecyclable*)dechet);
		log.i("AJOUT DTR" + std::to_string(dechet->getId()));
	}
}
void UsineTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	Log log;
	int poid;
	if (camionVert->ajouterDechet((DechetTraiteNonRecyclable*)dechet))
	{
		log.i("AJOUT DTNR" + std::to_string(dechet->getId()));
	}
	else
	{
		poid = camionVert->viderCamion();
		log.i("Camion vert vide de " + std::to_string(poid) + "kg");
		camionVert->ajouterDechet((DechetTraiteNonRecyclable*)dechet);
		log.i("AJOUT DTNR" + std::to_string(dechet->getId()));
	}
}
void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	Log log;
	int poid;
	if (camionBrun->ajouterDechet((DechetTraiteCompostable*)dechet))
	{
		log.i("AJOUT DTC" + std::to_string(dechet->getId()));
	}
	else
	{
		poid = camionBrun->viderCamion();
		log.i("Camion brun vide de " + std::to_string(poid) + "kg");
		camionBrun->ajouterDechet((DechetTraiteCompostable*)dechet);
		log.i("AJOUT DTC" + std::to_string(dechet->getId()));
	}
}
void UsineTraitement::traiterDechet(Dechet* dechet)
{
	Operation* operation = sequenceOperations->getOperationDemarage();
	bool choix;
	std::cout << "Dechet numero " << dechet->getId() << std::endl;
	preOperation();
	do
	{
		choix = operation->effectuerOperation(dechet);
		operation = operation->getOperationSuivante(choix);
	} while (operation != NULL);
	postOperation();
	std::cout << std::endl;
}