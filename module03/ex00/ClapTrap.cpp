#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor for " << name << " called" << std::endl;
	this->_name = name;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't do anything as it has no hit points or energy points left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " <<  this->_name << " took " << amount << " damage." << std::endl;
	std::cout << "Now it has " << this->_hitPoints << " hit points and " << this->_energyPoints << " energy points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't do anything as it has no hit points or energy points left" << std::endl;
		return;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " repaired itself and got " << amount << " hit points and now has " << this->_hitPoints << " hit points." << std::endl;
}

ClapTrap::~ClapTrap()
{

}
