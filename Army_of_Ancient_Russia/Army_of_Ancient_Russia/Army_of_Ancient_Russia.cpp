#include <iostream>
#include"C_Army_Cavalry.h"
#include"C_Army_Fleet.h"
#include"C_Army_Infantry.h"
#include"C_Armaments_Offensive.h"
#include"C_Armaments_Protective.h"
#include"C_Armaments_ThrowingMachines.h"


int main()
{
	C_Army_Cavalry cavalry;
	cavalry.amount(1500);
	C_Army_Fleet fleet;
	fleet.amount(1000);
	C_Army_Infantry infantry;
	infantry.amount(2000);
	
	std::cout << "\n";
	
	C_Armaments_Offensive offensive;
	offensive.attack(100);
	offensive.breack(200);
	std::cout << "\n";
	C_Armaments_Protective protective;
	protective.attack(0);
	protective.breack(300);
	std::cout << "\n";
	C_Armaments_ThrowingMachines throwing_machines;
	throwing_machines.attack(500);
	throwing_machines.breack(400);
}
