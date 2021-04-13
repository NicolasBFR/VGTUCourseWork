#pragma once
#include <iostream>
#include <SDL.h>
#include <string>
#ifndef IMAGE
#define IMAGE
class Image
{
protected:
	Uint16 x;
	Uint16 y;
public:
	Uint16 getX();
	Uint16 getY();
	virtual void operator%=(std::string filename) = 0;
};


#endif