#include "OperationTraitement.h"

OperationTraitement::OperationTraitement()
{
	Dechet::memoire++;
}

OperationTraitement::OperationTraitement(UsineTraitement* _usineTraitement)
{
	Dechet::memoire++;

	usineTraitement = _usineTraitement;
}


OperationTraitement::~OperationTraitement()
{
	Dechet::memoire--;
}
bool OperationTraitement::effectuerOperation(Dechet* dechet)
{
	return 0;
}
void OperationTraitement::creerDechetTraiteRecyclable(Dechet* dechet)
{
	usineTraitement->creerDechetTraiteRecyclable(dechet);
}
void OperationTraitement::creerDechetTraiteNonRecyclable(Dechet* dechet)
{
	usineTraitement->creerDechetTraiteNonRecyclable(dechet);
}
void OperationTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
	usineTraitement->creerDechetTraiteCompostable(dechet);
}