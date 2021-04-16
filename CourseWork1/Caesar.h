#pragma once
#include "BaseOffset.h"
#include <iostream>
#include <string>

using namespace std;

class Caesar : protected BaseOffset
{
public:
	Caesar();
	void operator%=(string str);
	void operator*=(string str);
	string GetOffset();


};

