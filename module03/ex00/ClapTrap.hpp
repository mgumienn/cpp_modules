#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap 
{
	private:
		std::string _name;
		unsigned int _hitPoints = 10;
		unsigned int _energyPoints = 10;
		unsigned int _attackDamage = 0;
	public:
		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif