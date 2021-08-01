#pragma once
#include "C_Army.h"
#include <iostream>
class C_Army_Fleet :
    public C_Armaments
{
    virtual void amount(int number_of_troops) override { std::cout << "Fleet =" << number_of_troops << "\n"; }
};

