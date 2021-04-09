#pragma once
#include <iostream>
#include <SDL.h>
#include <string>
#include "Image.h"
#ifndef IMAGEBW
#define IMAGEBW

class ImageBW :
    protected Image
{
    void operator%=(ImageBW* u);
};


#endif