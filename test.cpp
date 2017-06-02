#include <iostream>

#include "NDVPA.h"

int main() {
	NDVPA automaton;

	InputAlphabet alpha;

	alpha.addSymbol('a', PUSH);
	alpha.addSymbol('b', PUSH);
	alpha.addSymbol('c', LOCAL);
	alpha.addSymbol('d', LOCAL);
	alpha.addSymbol('e', POP);
	alpha.addSymbol('f', POP);

	State f0, f1, s0, s1;

	transition t;

	t.first = 0;
	t.second = 'A';
	f0.addTransition('a', t);
	t.first = 1;
	t.second = 'C';
	f0.addTransition('a', t);
	t.first = 0;
	t.second = 'B';
	f0.addTransition('b', t);
	t.first = 2;
	t.second = 'A';
	f0.addTransition('e', t);
	t.first = 2;
	t.second = 'B';
	f0.addTransition('f', t);
	t.first = 2;
	t.second = 'Z';
	f0.addTransition('c', t);
	t.first = 2;
	t.second = 'Z';
	f0.addTransition('d', t);
	t.first = 3;
	t.second = 'Z';
	f0.addTransition('c', t);
	t.first = 3;
	t.second = 'C';
	f0.addTransition('e', t);

	t.first = 0;
	t.second = 'A';
	f1.addTransition('b', t);
	t.first = 1;
	t.second = 'C';
	f1.addTransition('b', t);
	t.first = 1;
	t.second = 'B';
	f1.addTransition('a', t);
	t.first = 2;
	t.second = 'A';
	f1.addTransition('f', t);
	t.first = 2;
	t.second = 'Z';
	f1.addTransition('d', t);
	t.first = 3;
	t.second = 'B';
	f1.addTransition('e', t);
	t.first = 3;
	t.second = 'C';
	f1.addTransition('f', t);
	t.first = 3;
	t.second = 'Z';
	f1.addTransition('c', t);
	t.first = 3;
	t.second = 'Z';
	f1.addTransition('d', t);

	t.first = 2;
	t.second = 'A';
	s0.addTransition('e', t);
	t.first = 3;
	t.second = 'C';
	s0.addTransition('e', t);
	t.first = 2;
	t.second = 'B';
	s0.addTransition('f', t);

	t.first = 3;
	t.second = 'B';
	s1.addTransition('e', t);
	t.first = 2;
	t.second = 'A';
	s1.addTransition('f', t);
	t.first = 3;
	t.second = 'C';
	s1.addTransition('f', t);

	automaton.setInputAlphabet(alpha);
	automaton.addState(0, f0);
	automaton.addState(1, f1);
	automaton.addState(2, s0);
	automaton.addState(3, s1);
}