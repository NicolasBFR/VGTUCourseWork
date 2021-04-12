#pragma once
#include <iostream>
#include <SDL.h>
#include <string>
#include "Image.h"

#ifndef IMAGECOLOR
#define IMAGECOLOR
class ImageColor :
    protected Image
{
protected:
    PixelColor* PixelMatrix;
public:
    ImageColor(string filename);
    ~ImageColor();
    void operator%=(ImageColor* u);
};


#endif