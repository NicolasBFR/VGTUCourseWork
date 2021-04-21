#pragma once
#include "BaseOffset.h"
#include <iostream>
#include <string>

using namespace std;

class HomeMade : public BaseOffset
{
public:
	HomeMade();
	void operator%=(string str) override;
	void operator*=(string str) override;
};

