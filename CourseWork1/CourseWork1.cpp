
#include <iostream>
#include <string>
#include "Caesar.h"
#include "Atbash.h"
#include "Vigenere.h"
#include "HomeMade.h"

using namespace std;

int main()
{
	HomeMade wow = HomeMade();
	wow %= "six";
	wow *= "six";
	return 0;
}
