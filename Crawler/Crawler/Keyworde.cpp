#include <iostream>
#include <string>
#include <vector>
#include <string>
#include "Keyworde.h"

using namespace std;

//Constructor
Keyworde::Keyworde(char let) {
	letter = let;
	exit = false;
	vect = {};
}

//Destructor
Keyworde::~Keyworde() {
	for (auto i : vect) {
		//delete &i;
	}
}

void Keyworde::operator+(string* str)
{
	if (str->size() > 0) {
		char ch = str->at(0);
		str->erase(str->begin());
		int i = 0;
		for (; i < vect.size() && vect[i].letter != ch; i++) {

		}
		if (i == vect.size()) {
			vect.push_back(Keyworde(ch));
			vect[i] + str;
		}
		else {
			vect[i] + str;
		}
	}
	else {
		exit = true;
	}
}
void Keyworde::printkey() {
	for (int i = 0; i < vect.size(); i++) {
		cout << letter << " -> " << vect[i].letter << ";" << endl;
		if (vect[i].exit) {
			cout << vect[i].letter << " [color = blue];" << endl;
		}
	}
	for (int i = 0; i < vect.size(); i++) {
		vect[i].printkey();
	}
}
