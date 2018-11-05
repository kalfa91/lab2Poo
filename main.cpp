#include <iostream>
#include "UQAC.h"
#include "GenerateurSequenceOperations.h"

using namespace std;

int Dechet::idCourant = 0;
int Dechet::memoire = 0;

void laboratoire2()
{
	SequenceOperations* sqop = new SequenceOperations;
	UQAC* uqac = new UQAC;
	ChargementDechet* chargement = uqac->getChargementDechets();
	UsineTraitement* usineTraitement = new UsineTraitement();
	GenerateurSequenceOperations gso;
	Operation2* op2 = new Operation2(NULL,NULL);
	Operation3* op3 = new Operation3(op2, NULL);
	Operation1* op1 = new Operation1(op3, op2);


	usineTraitement->chargerOperations(gso.genererSequence(0, usineTraitement));
	usineTraitement->demarrerTraitements(chargement);

	delete usineTraitement;
	delete uqac;
	delete sqop;
	delete op1;
	delete op2;
	delete op3;
}
int main()
{
	int i;
	laboratoire2();
	cout << "fuites de memoires : " << Dechet::memoire << endl;
	cin >> i;
	return 0;
}