#pragma once
#include "Cipher.h"
#include <string>
class Caesar :
    public Cipher
{
public:
    Caesar();
    void operator%=(string str);
};

