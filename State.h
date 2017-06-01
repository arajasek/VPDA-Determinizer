#ifndef STATE_H
#define STATE_H

#include <string>

class State {
	unsigned int id;
	bool final;
	std::string name;
public:
	unsigned int getId() {return id;}
	void setId (unsigned int i) {id = i;}

	bool getFinal() {return final;}
	void setFinal(bool f) {final = f;}
	std::string getName() {return name;}
	void setName(std::string n) {name = n;}
};

#endif