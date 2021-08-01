#pragma once
#include "C_Armaments.h"
#include <iostream>
class C_Armaments_Protective :
    public C_Armaments
{
    virtual void attack(int attack_armaments)override = 0;
    virtual void breack(int break_armaments) override { std::cout << "Break of Protective = "<<break_armaments << "\n"; }
};

