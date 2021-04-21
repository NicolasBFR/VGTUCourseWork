#pragma once
#include "BaseOffset.h"
#include <iostream>
#include <string>

using namespace std;

class Vigenere : public BaseOffset
{
public:
	Vigenere();
	void operator%=(string str) override;
	void operator*=(string str) override;
	string GetOffset() override;
};

