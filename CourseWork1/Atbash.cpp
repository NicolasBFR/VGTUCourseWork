#include "Atbash.h"
#include <iostream>
#include <string>

using namespace std;

Atbash::Atbash()
{
	cout << "Prompt the string to be encoded:" << endl;
	getline(cin, original);
	encodede = original;
}

void Atbash::operator%=(string str)
{
	int offset;
	for (int i = 0; i < encodede.size(); i++) {
		if (encodede[i] >= 97 && encodede[i] <= 122) {
			int tmp = ((int)encodede[i]);
			tmp -= 97;
			tmp = 25 - tmp;
			tmp += 97;
			encodede[i] = ((char)tmp);
		}
		else if (encodede[i] >= 60 && encodede[i] <= 90) {
			int tmp = ((int)encodede[i]);
			tmp -= 65;
			tmp = 25 - tmp;
			tmp += 65;
			encodede[i] = ((char)tmp);
		}
	}
	cout << "Encoded string : " << encodede << endl;
}

void Atbash::operator*=(string str)
{
	operator%=(str);
}
