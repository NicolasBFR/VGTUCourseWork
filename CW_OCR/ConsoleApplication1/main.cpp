#include <iostream>
#include <SDL.h>
#include <string>
#include "Image.h"
#include "ImageColor.h"
#include "ImageBW.h"
#include "Pixel.h"
#include "PixelColor.h"
#include "PixelBW.h"
using namespace std;

int main(int argc, char* argv[])
{
	/*
	cout << sizeof(bool); 
	string tmp;
	getline(cin, tmp);
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		cout << "SDL initialization failed. SDL Error: " << SDL_GetError();
	}
	else
	{
		cout << "SDL initialization succeeded!";
	}

	cin.get(); //*/
	string filename;
	getline(cin, filename);
	ImageColor *img = new ImageColor(filename);
	*img %= "gray";
	ImageBW* imgBW = new ImageBW(img);
	delete img;
	getline(cin, filename);
	*imgBW %= filename;
	delete imgBW;
	return 0;
}