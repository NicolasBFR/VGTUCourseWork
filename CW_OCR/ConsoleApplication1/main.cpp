#include <iostream>
#include <SDL.h>
#include <string>
#include "Image.h"
#include "ImageColor.h"
#include "ImageBW.h"
#include "Pixel.h"
#include "PixelColor.h"
#include "PixelBW.h"
#include <fstream>

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
	string filename = "C:\\Users\\33768\\Desktop\\OOProgramming\\CW\\CW_OCR\\Debug\\aaa.bmp";
	ifstream myFile("C:\\Users\\33768\\Desktop\\OOProgramming\\CW\\CW_OCR\\Debug\\aaa.bmp");
	if (!myFile.is_open()) {
		cout << "connard" << endl;
	}
	//cout << "Enter image name/path:" << endl;
	//getline(cin, filename);
	ImageColor *img = new ImageColor(filename);
	return 0;
	*img %= "gray";
	ImageBW* imgBW = new ImageBW(img);
	delete img;
	cout << "Enter output name/path:" << endl;
	getline(cin, filename);
	*imgBW %= filename;
	delete imgBW;
	return 0;
}