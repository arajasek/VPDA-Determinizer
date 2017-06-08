#ifndef NDSTATE_H
#define NDSTATE_H

#include <string>
#include <unordered_map>

typedef std::pair<unsigned int, char> transition;


class NDState {
	unsigned int id;
	bool final;
	std::string name;

	std::unordered_map <char, transition> transitions;

public:
	unsigned int getId() {return id;}
	void setId (unsigned int i) {id = i;}

	bool getFinal() {return final;}
	void setFinal(bool f) {final = f;}
	std::string getName() {return name;}
	void setName(std::string n) {name = n;}

	void addTransition(char c, transition t) { transitions.insert(std::pair<char, transition>(c,t));}
};

#endif