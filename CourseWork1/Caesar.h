#pragma once
#include "BaseOffset.h"
#include <iostream>
#include <string>

using namespace std;

class Caesar : public BaseOffset
{
public:
	Caesar();
	void operator%=(string str) override;
	void operator*=(string str) override;
	string GetOffset() override;


};

