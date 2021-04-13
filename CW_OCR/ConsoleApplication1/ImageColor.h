#pragma once
#include <iostream>
#include <SDL.h>
#include <string>
#include "Image.h"
#include "PixelColor.h"

#ifndef IMAGECOLOR
#define IMAGECOLOR
class ImageColor :
    protected Image
{
protected:
    PixelColor* PixelMatrix;
public:
    ImageColor(std::string filename);
    ~ImageColor();
    void operator%=(std::string filename);
};


#endif