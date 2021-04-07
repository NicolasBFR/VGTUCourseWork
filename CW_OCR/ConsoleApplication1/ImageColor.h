#pragma once
#include "Image.h"
class ImageColor :
    protected Image
{
    void operator%=(ImageColor* u);
};

