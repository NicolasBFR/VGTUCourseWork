#pragma once
#include <string>

using namespace std;

class Cipher
{
protected:
	string original;
	string encoded;
public:
	Cipher(string str);
	virtual void operator%=(string str) = 0;
};

