
#include <iostream>
#include <string>
//#include "IBase.h"
#include "Caesar.h"
#include "Atbash.h"
#include "Vigenere.h"
#include "HomeMade.h"

using namespace std;

IBase* initialize(int intInput);
void operation(IBase* offe, int intInput);

int main()
{
	string input;
	cout << "Choose desired method:\n1: Caesar\n2 : Atbash\n3: Vigenere\n4 : HomeMade" << endl;
	getline(cin, input);
	int intInput = stoi(input);
	IBase* offe = initialize(intInput);
	if (offe == nullptr)
		return 0;
	cout << "Type 1 to encode, 2 to decode" << endl;
	getline(cin, input);
	intInput = stoi(input);
	operation(offe,intInput);
	delete offe;
	return 0;
}

IBase* initialize(int intInput)
{
	IBase* base = nullptr;
	switch (intInput) {
	case 1:
		base = new Caesar();
		break;
	case 2:
		base = new Atbash();
		break;
	case 3:
		base = new Vigenere();
		break;
	case 4:
		base = new HomeMade();
		break;
	default:
		cout << "Error: invalid input" << endl;
	}
	return base;
}

void operation(IBase* offe, int intInput)
{
	switch (intInput)
	{
	case 1:
		*offe %= offe->GetOffset();
		break;
	case 2:
		*offe *= offe->GetOffset();
		break;
	default:
		cout << "Error: invalid input" << endl;
		break;
	}
}
