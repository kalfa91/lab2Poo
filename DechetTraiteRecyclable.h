#ifndef DECHETTRAITERECYCLABLE_H
#define DECHETTRAITERECYCLABLE_H

#include "DechetTraite.h"

class DechetTraiteRecyclable :
	public DechetTraite
{
public:
	DechetTraiteRecyclable(Dechet* _dechet);
	~DechetTraiteRecyclable();
};

#endif