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
    void operator%=(ImageColor* u);
};


#endif