#include "ImageColor.h"
#include <fstream>
#include<iostream>
#include "string"
#include <SDL.h>
#include <windows.h>

using namespace std;


ImageColor::ImageColor(std::string filename)
{
	ifstream in_file(filename, ios::binary);
	in_file.seekg(0, ios::end);
	size_t file_size = in_file.tellg();
	SDL_Surface* SDLS = new SDL_Surface;
	SDLS = SDL_LoadBMP(filename.c_str());
	x = SDLS->w;
	y = SDLS->h;
	SDLS = SDL_ConvertSurfaceFormat(SDLS, SDL_PIXELFORMAT_ARGB8888, 0);
	PixelMatrix = (PixelColor*) malloc(x*y*sizeof(PixelColor));
	for (Uint16 j = 0; j < SDLS->h; j++) {
		for (Uint16 i = 0; i < SDLS->w -1; i++) {
			if (i > 397)
				cout << i * j << endl;
			Uint32 tmp = static_cast<Uint32*>( SDLS->pixels)[SDLS->w * j + i];
			PixelMatrix[SDLS->w * j + i] = PixelColor( tmp );
		}
	}
	delete [] SDLS;
}

ImageColor::~ImageColor()
{
	delete[] PixelMatrix;
}

void ImageColor::operator%=(std::string filename){

	for (Uint16 j = 0; j < y; j++) {
		for (Uint16 i = 0; i < x; i++) {
			PixelMatrix[x * j + i].toGray();
		}
	}
}

Uint32 ImageColor::GetPixel(Uint16 i, Uint16 j) {
	return PixelMatrix[j * x + i].GetValue();
}