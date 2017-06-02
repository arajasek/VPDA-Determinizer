#ifndef NDVPA_H
#define NDVPA_H

#include <unordered_map>

#include "State.h"
#include "InputAlphabet.h"

class NDVPA {
	unsigned int nextStateId;
	std::unordered_map <unsigned int, State> states;
	InputAlphabet alphabet;

public:
	void setInputAlphabet(InputAlphabet a) {alphabet = a;}
	void addState(State s) { states.insert(std::pair<unsigned int, State>(nextStateId++, s)); }
};

#endif