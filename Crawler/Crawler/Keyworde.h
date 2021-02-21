#ifndef KEYWORDE_H
#define KEYWORDE_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Keyworde {
private:
	char letter;
	bool exit;
	vector<Keyworde> vect;
public:
	Keyworde(char letter = '\0');
	~Keyworde();
	void operator+(string* str);
	void printkey();

};


#endif