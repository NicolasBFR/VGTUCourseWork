#include "Vigenere.h"
#include <iostream>
#include <string>

using namespace std;

Vigenere::Vigenere()
{
	cout << "Prompt the string to be encoded:" << endl;
	getline(cin, original);
	cout << "Prompt the required offset:" << endl;
	getline(cin, offset);
	encodede = original;
}

void Vigenere::operator%=(string str)
{
	int offS = stoi(str) % 26;
	offS = (offS + 26) % 26;
	for (int i = 0; i < encodede.size(); i++) {
		if (encodede[i] >= 97 && encodede[i] <= 122) {
			int tmp = ((int)encodede[i]) + offS;
			tmp -= 97;
			tmp %= 26;
			tmp += 97;
			encodede[i] = ((char)tmp);
		}
	}
	cout << "Encoded string : " << encodede << endl;
}

void Vigenere::operator*=(string str)
{

}

string Vigenere::GetOffset()
{
	return offset;
}