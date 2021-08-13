#pragma once
#include "C_Armaments.h"
#include <iostream>
namespace armaments
{
    namespace inner_throwingmachines
    {
        class C_Armaments_ThrowingMachines :
            public C_Armaments
        {
            virtual void attack(int attack_armaments)override { std::cout << "Attack Throwing Machines = " << attack_armaments << "\n"; }
            virtual void breack(int break_armaments) override { std::cout << "Break Throwing Machines = " << break_armaments << "\n"; }
        };
    }
};

