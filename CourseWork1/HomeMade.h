#pragma once
#include "BaseOffset.h"
#include <iostream>
#include <string>

using namespace std;

class HomeMade : protected BaseOffset
{
public:
	HomeMade();
	void operator%=(string str);
	void operator*=(string str);
};

