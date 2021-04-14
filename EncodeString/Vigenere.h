#pragma once
#include "Cipher.h"
#include <string>
class Vigenere :
    public Cipher
{
public:
    Vigenere();
    void operator%=(string str);
};

