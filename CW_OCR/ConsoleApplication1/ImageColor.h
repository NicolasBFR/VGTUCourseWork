#pragma once
#include <iostream>
#include <SDL.h>
#include <string>
#include "Image.h"
#include "PixelColor.h"

#ifndef IMAGECOLOR
#define IMAGECOLOR
class ImageColor :
    public Image
{
protected:
    PixelColor* PixelMatrix;
public:
    ImageColor(std::string filename);
    ~ImageColor();
    void operator%=(std::string filename);
    Uint32 GetPixel(Uint16 i, Uint16 j);
};


#endif