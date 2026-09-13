#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap 
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	protected:
		unsigned int getHitPoints() const;
		void setHitPoints(unsigned int hp);
		unsigned int getEnergyPoints() const;
		void setEnergyPoints(unsigned int ep);
		unsigned int getAttackDamage() const;
		void setAttackDamage(unsigned int damage);
		std::string getName() const;
	public:
		ClapTrap(std::string name);
		virtual void attack(const std::string& target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif