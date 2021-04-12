#pragma once
#include <iostream>
#include <SDL.h>
#include <string>
#include "Pixel.h"
#include "PixelColor.h"
#ifndef PIXELBW
#define PIXELBW
class PixelBW :
    protected Pixel
{
private:
    bool isWhite;
public:
    PixelBW(PixelColor pixel);
    bool GetWhite();

};

#endif

