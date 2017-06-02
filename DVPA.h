#ifndef DVPA_H
#define DVPA_H

#include "NDVPA.h"

class DVPA {

	NDVPA automaton;

public:
	void determinize();
	void setNDVPA(NDVPA n) { automaton = n;}
};

#endif