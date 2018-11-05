#ifndef DEPOT_H
#define DEPOT_H

#include "CamionBleu.h"
#include "CamionBrun.h"
#include "CamionVert.h"

class Depot
{
public:
	Depot();
	~Depot();
	CamionBleu* getCamionBleu() const;
	CamionVert* getCamionVert() const;
	CamionBrun* getCamionBrun() const;
	void depotDechetsTraites(CamionVert* _camion);
	void depotDechetsTraites(CamionBleu* _camion);
	void depotDechetsTraites(CamionBrun* _camion);


private:
	int totalDTRecyclable;
	int totalDTNonRecyclable;
	int totalDTCompostable;
};

std::ostream & operator<<(std::ostream & out, Depot const & depot);

#endif