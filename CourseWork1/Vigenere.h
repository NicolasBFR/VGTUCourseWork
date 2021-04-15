#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vigenere
{
private:
	string original;
	string encodede;
	string offset;
public:
	Vigenere();
	void operator%=(string str);
	void operator*=(string str);
	string GetOffset();
};

