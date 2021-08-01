#pragma once
#include <ostream>
#pragma region pure virtual class
class C_Armaments
{
public:
	friend std::ostream& operator << (std::ostream& out, const C_Armaments& weapon) {
		out << "Number of troops: " << weapon.attack_armaments << "\n";
		return out;
	}
	virtual void amount(int number_of_troops) = 0;
protected:
	C_Armaments()
	{
		this->attack_armaments = 0;
	}
	C_Armaments(int attack_weapen, int break_weapen)
	{
		this->attack_armaments = attack_weapen;
	}
	int attack_armaments;
};
#pragma endregion

