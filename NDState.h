#ifndef NDSTATE_H
#define NDSTATE_H

#include <string>
#include <unordered_map>

typedef std::pair<unsigned int, char> NDtransition;


class NDState {
	unsigned int id;
	bool final;
	std::string name;

	std::unordered_map <char, NDtransition> transitions;

public:
	unsigned int getId() {return id;}
	void setId (unsigned int i) {id = i;}

	bool getFinal() {return final;}
	void setFinal(bool f) {final = f;}
	std::string getName() {return name;}
	void setName(std::string n) {name = n;}

	void addTransition(char c, NDtransition t) { transitions.insert(std::pair<char, NDtransition>(c,t));}
};

#endif