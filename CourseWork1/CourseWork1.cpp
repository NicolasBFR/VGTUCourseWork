
#include <iostream>
#include <string>
#include "Caesar.h"
#include "Atbash.h"
#include "Vigenere.h"

using namespace std;

int main()
{
	Vigenere wow = Vigenere();
	wow %= "six";
	wow *= "six";
	return 0;
}
