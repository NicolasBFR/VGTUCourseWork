#pragma once
#include "Image.h"
class ImageBW :
    protected Image
{
    void operator%=(ImageBW* u);
};

