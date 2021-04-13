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
    Uint32 value;
public:
    PixelColor(Uint32 values);
    Uint32 GetValue();
};
#endif
