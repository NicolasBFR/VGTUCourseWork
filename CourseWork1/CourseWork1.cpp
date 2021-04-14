
#include <iostream>
#include <string>
#include "Caesar.h"
#include "Atbash.h"

using namespace std;

int main()
{
	Atbash wow = Atbash();
	wow %= "whatever";
	return 0;
}
