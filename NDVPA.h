#ifndef NDVPA_H
#define NDVPA_H

#include <unordered_map>

#include "NDState.h"
#include "InputAlphabet.h"

//assumes state id 0 is initial state

class NDVPA {
	std::unordered_map <unsigned int, NDState> states;
	InputAlphabet alphabet;

public:
	void setInputAlphabet(InputAlphabet a) {alphabet = a;}
	void addState(unsigned int i, NDState s) { states.insert(std::pair<unsigned int, NDState>(i, s)); }
	std::unordered_map <unsigned int, NDState> getStates() { return states;}
	InputAlphabet getAlphabet() { return alphabet;}
};

#endif