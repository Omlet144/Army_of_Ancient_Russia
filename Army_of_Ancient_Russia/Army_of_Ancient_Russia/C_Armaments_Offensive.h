#pragma once
#include "C_Armaments.h"
#include <iostream>
namespace armaments
{
    namespace inner_offensive
    {
        class C_Armaments_Offensive :
            public C_Armaments
        {
            virtual void attack(int attack_armaments)override { std::cout << "Attack Offensive = " << attack_armaments << "\n"; }
            virtual void breack(int break_armaments) override { std::cout << "Break Offensive = " << break_armaments << "\n"; }
        };
    }
};

