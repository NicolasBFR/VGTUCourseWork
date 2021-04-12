#pragma once
#include <iostream>
#include <SDL.h>
#include <string>
#include "Pixel.h"

#ifndef PIXELCOLOR
#define PIXELCOLOR

class PixelColor :
    protected Pixel
{
private:
    Uint8 blue;
    Uint8 red;
    Uint8 green;
public:
    PixelColor(Uint32 values);
};
#endif
