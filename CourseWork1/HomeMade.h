#pragma once
#include "BaseNoOffset.h"
#include <iostream>
#include <string>

using namespace std;

class HomeMade : protected BaseNoOffset
{
public:
	HomeMade();
	void operator%=(string str);
	void operator*=(string str);
};

