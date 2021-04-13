#include "ImageColor.h"
#include <fstream>
#include<iostream>
#include "string"
#include <SDL.h>

using namespace std;

ImageColor::ImageColor(std::string filename)
{
	ifstream in_file(filename, ios::binary);
	in_file.seekg(0, ios::end);
	size_t file_size = in_file.tellg();
	SDL_Surface* SDLS = (SDL_Surface *) new char[file_size/8];
	SDLS = SDL_LoadBMP(filename.c_str());
	x = SDLS->w;
	y = SDLS->h;
	SDLS = SDL_ConvertSurfaceFormat(SDLS, SDL_PIXELFORMAT_ARGB8888, 0);
	PixelMatrix = new PixelColor[x*y];
	for (Uint16 i = 0; i < y; i++) {
		for (Uint16 j = 0; j < x; j++) {
			Uint32* tmp = SDLS->pixels[x * j + i];
			PixelMatrix[x * j + i] = PixelColor( *tmp );
		}
	}
	delete SDLS;
}

ImageColor::~ImageColor()
{
	delete[] PixelMatrix;
}

void ImageColor::operator%=(std::string filename){

	for (Uint16 i = 0; i < y; i++) {
		for (Uint16 j = 0; j < x; j++) {
			PixelMatrix[x * j + i].toGray();
		}
	}
}

Uint32 ImageColor::GetPixel(Uint16 i, Uint16 j) {
	return PixelMatrix[j * x + i].GetValue();
}