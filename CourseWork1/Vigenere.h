#pragma once
#include "BaseOffset.h"
#include <iostream>
#include <string>

using namespace std;

class Vigenere : protected BaseOffset
{
public:
	Vigenere();
	void operator%=(string str);
	void operator*=(string str);
	string GetOffset();
};

