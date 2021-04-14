
#include <iostream>
#include <string>
#include "Caesar.h"

using namespace std;

int main()
{
	Caesar wow = Caesar();
	wow *= wow.GetOffset();
	return 0;
}
