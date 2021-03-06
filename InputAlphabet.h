#ifndef INPUT_ALPHABET_H
#define INPUT_ALPHABET_H

#include <unordered_map>

enum SymbolType {PUSH, LOCAL, POP};

class InputAlphabet {

	std::unordered_map <char, SymbolType> symbols;
public:
	void addSymbol(char s, SymbolType t) { symbols.insert(std::pair <char,SymbolType> (s,t));}
	void removeSymbol(char s) {symbols.erase(symbols.find(s));}
	SymbolType getSymbolType(char s) {return symbols.at(s);}
};

#endif