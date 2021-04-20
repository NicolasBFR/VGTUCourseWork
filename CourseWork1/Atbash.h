#pragma once
#include "BaseOffset.h"
#include <iostream>
#include <string>

using namespace std;

class Atbash : protected BaseOffset
{
public:
	Atbash();
	void operator%=(string str);
	void operator*=(string str);
};

