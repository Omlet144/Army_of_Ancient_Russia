#pragma once
#include "C_Army.h"
#include <iostream>
class C_Army_Fleet :
    public C_Army
{
    virtual void amount(int number_of_troops) override { std::cout << "Fleet =" << number_of_troops << "\n"; }
};

