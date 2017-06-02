#ifndef NDVPA_H
#define NDVPA_H

#include <unordered_map>

#include "State.h"
#include "InputAlphabet.h"

class NDVPA {
	std::unordered_map <unsigned int, State> states;
	InputAlphabet alphabet;

public:
	void setInputAlphabet(InputAlphabet a) {alphabet = a;}
	void addState(unsigned int i, State s) { states.insert(std::pair<unsigned int, State>(i, s)); }
};

#endif