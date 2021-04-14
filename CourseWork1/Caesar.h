#pragma once
#include <iostream>
#include <string>

using namespace std;

class Caesar
{
private:
	string original;
	string encodede;
	string offset;
public:
	Caesar();
	void operator%=(string str);
	void operator*=(string str);
	string GetOffset();


};

