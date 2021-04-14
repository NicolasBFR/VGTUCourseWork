#pragma once
#include "Cipher.h"
#include <string>
class HomeMade :
    public Cipher
{
public:
    HomeMade();
    void operator%=(string str);
};

