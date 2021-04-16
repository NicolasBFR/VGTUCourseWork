#pragma once
#include "BaseNoOffset.h"
#include <iostream>
#include <string>

using namespace std;

class Atbash : protected BaseNoOffset
{
public:
	Atbash();
	void operator%=(string str);
	void operator*=(string str);
};

