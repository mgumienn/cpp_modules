#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFivesGuys(void);
		~FragTrap();
};

#endif