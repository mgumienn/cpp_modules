#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		HumanA();
		std::string name;
		Weapon& weapon;
	public:
		void attack();
		HumanA(std::string name, Weapon& wepon);
		~HumanA();
};

#endif