#pragma once
#include <iostream>
#include <SDL.h>
#include <string>
#include "Image.h"
#include "ImageColor.h"
#include "PixelBW.h"
#ifndef IMAGEBW
#define IMAGEBW

class ImageBW :
    protected Image
{
private:
    PixelBW* PixelMatrix;
public:
    ImageBW(ImageColor *img);
    ~ImageBW();
    void operator%=(std::string filename);
};


#endif