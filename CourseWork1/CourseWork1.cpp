
#include <iostream>
#include <string>
#include "Caesar.h"
#include "Atbash.h"
#include "Vigenere.h"
#include "HomeMade.h"

using namespace std;

int main()
{
	string input;
	cout << "Choose desired method:\n1: Caesar\n2 : Atbash\n3: Vigenere\n4 : HomeMade" << endl;
	getline(cin, input);
	cout << "Type 1 to encode, 2 to decode" << endl;
	string encDec;
	getline(cin, encDec);
	input += encDec;
	int inpute = stoi(input);
	switch (inpute) {
	case 11: {
		Caesar cae = Caesar();
		cae %= cae.GetOffset();
		return 0;
	}
	case 12: {
		Caesar cae = Caesar();
		cae *= cae.GetOffset();
		return 0;
	}
	case 21: {
		Atbash atb = Atbash();
		atb %= "e";
		return 0;
	}
	case 22: {
		Atbash atb = Atbash();
		atb *= "e";
		return 0;
	}
	case 31: {
		Vigenere vig = Vigenere();
		vig %= vig.GetOffset();
		return 0;
	}
	case 32: {
		Vigenere vig = Vigenere();
		vig *= vig.GetOffset();
		return 0;

	}
	case 41: {
		HomeMade hom = HomeMade();
		hom %= "e";
		return 0;
	}
	case 42: {
		HomeMade hom = HomeMade();
		hom *= "e";
		return 0;
	}
	default:
		cout << "Error: invalid input" << endl;
	} 
	return 0;
}
