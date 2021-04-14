#pragma once
#include <iostream>
#include <string>

using namespace std;

class Caesar
{
private:
	string original;
	string encodede;
public:
	Caesar();
	void operator%=(string str);

};

