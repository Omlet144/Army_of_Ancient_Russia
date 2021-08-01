#pragma once
#include "C_Army.h"
#include <iostream>
class C_Army_Infantry :
    public C_Armaments
{
    virtual void amount(int number_of_troops) override { std::cout << "Infantry =" <<number_of_troops<< "\n"; }
};

