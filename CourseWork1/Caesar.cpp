#include "Caesar.h"
#include <iostream>
#include <string>

using namespace std;

Caesar::Caesar()
{
	cout << "Prompt the string to be encoded:" << endl;
	getline(cin, original);
	cout << "Prompt the required offset:" << endl;
	getline(cin, offset);
	encodede = original;
}

void Caesar::operator%=(string str)
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
		if (encodede[i] >= 65 && encodede[i] <= 90) {
			int tmp = ((int)encodede[i]) + offS;
			tmp -= 65;
			tmp %= 26;
			tmp += 65;
			encodede[i] = ((char)tmp);
		}
	}
	cout << "Encoded string : " << encodede << endl;
}

void Caesar::operator*=(string str)
{
	operator%=( to_string(-1*stoi(str) ) );
}

string Caesar::GetOffset()
{
	return offset;
}
