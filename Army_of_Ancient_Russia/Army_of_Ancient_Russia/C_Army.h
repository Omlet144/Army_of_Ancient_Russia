#pragma once
#include <ostream>
#pragma region pure virtual class
class C_Army
{
public:
	friend std::ostream& operator << (std::ostream& out, const C_Army& weapon) {
		out << "Number of troops: " << weapon.number_of_troops << "\n";
		return out;
	}
	virtual void amount() = 0;
protected:
	C_Army()
	{
		this->number_of_troops = 0;
	}
	C_Army(int attack_weapen, int break_weapen)
	{
		this->number_of_troops = attack_weapen;
	}
	int number_of_troops;
};
#pragma endregion

