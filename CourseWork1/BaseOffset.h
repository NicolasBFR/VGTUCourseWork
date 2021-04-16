#pragma once
#include <iostream>
#include <string>

using namespace std;

class BaseOffset
{
protected:
	string original;
	string encodede;
	string offset;
public:
	virtual void operator%=(string str) = 0;
	virtual void operator*=(string str) = 0;
	virtual string GetOffset() = 0;

};
