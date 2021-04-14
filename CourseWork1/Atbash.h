#pragma once
#include <iostream>
#include <string>

using namespace std;

class Atbash
{

private:
	string original;
	string encodede;
public:
	Atbash();
	void operator%=(string str);
	void operator*=(string str);
};

