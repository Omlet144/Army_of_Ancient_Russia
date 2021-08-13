#pragma once
#include <iostream>
#include "C_Army.h"
namespace army {
	namespace inner_cavalry
	{
		class C_Army_Cavalry :
			public C_Army
		{
			virtual void amount(int number_of_troops) override { std::cout << "Cavalry =" << number_of_troops << "\n"; }
		};
	}
};


