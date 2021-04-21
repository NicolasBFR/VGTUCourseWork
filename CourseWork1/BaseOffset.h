#pragma once
#include "IBase.h"
#include <iostream>
#include <string>

using namespace std;

class BaseOffset : public IBase
{
protected:
	string original;
	string encodede;
	string offset;
public:
	string GetOffset() override { return "e"; };
	BaseOffset() {};
};
