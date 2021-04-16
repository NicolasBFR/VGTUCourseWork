#pragma once
#include <iostream>
#include <string>

using namespace std;

class BaseNoOffset
{
protected:
	string original;
	string encodede;
public:
	virtual void operator%=(string str) = 0;
	virtual void operator*=(string str) = 0;

};
