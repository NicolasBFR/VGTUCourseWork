#pragma once
#include "BaseOffset.h"
#include <iostream>
#include <string>

using namespace std;

class Atbash : public BaseOffset
{
public:
	Atbash();
	void operator%=(string str) override;
	void operator*=(string str) override;
};

