#pragma once
#include <iostream>
#include <string>

using namespace std;

class HomeMade
{
private:
	string original;
	string encodede;
public:
	HomeMade();
	void operator%=(string str);
	void operator*=(string str);
};

