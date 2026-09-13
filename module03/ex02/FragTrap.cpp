#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << "New FragTrap " << name << " emerged" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

void FragTrap::attack(const std::string& target)
{
	unsigned int energyPoints = this->getEnergyPoints();
	unsigned int hitPoints = this->getHitPoints();
	std::string name = this->getName();

	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "FragTrap " << name << " can't do anything as it has no hit points or energy points left" << std::endl;
		return;
	}
	std::cout << "FragTrap " << name << " attacks " << target;
	std::cout << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(energyPoints - 1);
}

void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int hitPoints = this->getHitPoints();

	if (hitPoints < amount)
		this->setHitPoints(0);
	else
		this->setHitPoints(hitPoints - amount);
	std::cout << "FragTrap " <<  this->getName() << " took " << amount << " damage." << std::endl;
	std::cout << "Now it has " << this->getHitPoints() << " hit points and " << this->getEnergyPoints() << " energy points." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	unsigned int energyPoints = this->getEnergyPoints();
	unsigned int hitPoints = this->getHitPoints();
	std::string name = this->getName();

	if (hitPoints == 0 || energyPoints == 0)
	{
		std::cout << "FragTrap " << name << " can't do anything as it has no hit points or energy points left" << std::endl;
		return;
	}
	this->setHitPoints(hitPoints + amount);
	this->setEnergyPoints(energyPoints - 1);
	std::cout << "FragTrap " << name << " repaired itself and got " << amount << " hit points and now has " << this->getHitPoints() << " hit points." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << ": Hey, let's high five, buddy!" << std::endl;
}

FragTrap::~FragTrap()
{
}