#pragma once
#include "Cipher.h"
#include <string>
class Atbash :
    public Cipher
{
public:
    Atbash();
    void operator%=(string str);
};

