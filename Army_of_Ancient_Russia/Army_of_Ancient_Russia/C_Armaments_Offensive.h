#pragma once
#include "C_Armaments.h"
#include <iostream>
class C_Armaments_Offensive :
    public C_Armaments
{
public:
    virtual void attack(int attack_armaments)override { std::cout << "Attack Offensive = "<<attack_armaments << "\n"; }
    virtual void breack(int break_armaments) override { std::cout << "Break Offensive = "<<break_armaments <<"\n"; }
};

