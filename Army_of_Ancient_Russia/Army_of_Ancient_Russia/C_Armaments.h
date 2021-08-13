#pragma once
#include <ostream>
namespace armaments
{
#pragma region pure virtual class
	class C_Armaments
	{
	public:
		friend std::ostream& operator << (std::ostream& out, const C_Armaments& armaments) {
			out << "Attack: " << armaments.attack_armaments << "\n" << "Breack: " << armaments.break_armaments << "\n";
			return out;
		}
		virtual void attack(int attack_armaments) = 0;
		virtual void breack(int break_armaments) = 0;
	protected:
		C_Armaments()
		{
			this->attack_armaments = 0;
			this->break_armaments = 0;
		}
		C_Armaments(int attack_armaments, int break_armaments)
		{
			this->attack_armaments = attack_armaments;
			this->break_armaments = break_armaments;
		}
		int attack_armaments;
		int break_armaments;
	};
#pragma endregion
}




