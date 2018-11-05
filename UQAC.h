#ifndef UQAC_H
#define UQAC_H

#include "ChargementDechet.h"

class UQAC
{
public:
	UQAC();
	~UQAC();

	ChargementDechet* getChargementDechets() const;
};

#endif