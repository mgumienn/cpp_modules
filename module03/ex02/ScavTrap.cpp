#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << "New ScavTrap " << name << " emerged" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

void ScavTrap::attack(const std::string& target)
{
	unsigned int energyPoints = this->getEnergyPoints();
	unsigned int hitPoints = this->getHitPoints();
	std::string name = this->getName();

	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << " can't do anything as it has no hit points or energy points left" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target;
	std::cout << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(energyPoints - 1);
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int hitPoints = this->getHitPoints();

	if (hitPoints < amount)
		this->setHitPoints(0);
	else
		this->setHitPoints(hitPoints - amount);
	std::cout << "ScavTrap " <<  this->getName() << " took " << amount << " damage." << std::endl;
	std::cout << "Now it has " << this->getHitPoints() << " hit points and " << this->getEnergyPoints() << " energy points." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int energyPoints = this->getEnergyPoints();
	unsigned int hitPoints = this->getHitPoints();
	std::string name = this->getName();

	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << " can't do anything as it has no hit points or energy points left" << std::endl;
		return;
	}
	this->setHitPoints(hitPoints + amount);
	this->setEnergyPoints(energyPoints - 1);
	std::cout << "ScavTrap " << name << " repaired itself and got " << amount << " hit points and now has " << this->getHitPoints() << " hit points." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
}