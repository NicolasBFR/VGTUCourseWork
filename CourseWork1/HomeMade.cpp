#include "HomeMade.h"

HomeMade::HomeMade()
{
	cout << "Prompt the string to be encoded:" << endl;
	getline(cin, original);
	encodede = original;
}

void HomeMade::operator%=(string str)
{
	int offS = 0;
	for (int i = 0; i < encodede.size(); i++) {
		if (encodede[i] >= 97 && encodede[i] <= 122 && offS == 0) {
			offS = ((int)encodede[i]) -97;
		}
		else if (encodede[i] >= 97 && encodede[i] <= 122) {
			int tmp = ((int)encodede[i]) + offS;
			tmp -= 97;
			tmp %= 26;
			tmp += 97;
			encodede[i] = ((char)tmp);
		}
		else {
			offS = 0;
		}
	}
	cout << "Encoded string : " << encodede << endl;
}

void HomeMade::operator*=(string str)
{
	int offS = 0;
	for (int i = 0; i < encodede.size(); i++) {
		if (encodede[i] >= 97 && encodede[i] <= 122 && offS == 0) {
			offS = ((int)encodede[i]) -97;
		}
		else if (encodede[i] >= 97 && encodede[i] <= 122) {
			int tmp = ((int)encodede[i]) - offS;
			tmp -= 97;
			tmp = (tmp + 26) % 26;
			tmp += 97;
			encodede[i] = ((char)tmp);
		}
		else {
			offS = 0;
		}
	}
	cout << "Encoded string : " << encodede << endl;
}

