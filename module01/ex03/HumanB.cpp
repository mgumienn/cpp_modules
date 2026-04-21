#include "HumanB.hpp"

Weapon defaultWeapon = Weapon("bare hands");

HumanB::HumanB(std::string name) : name(name), weapon(&defaultWeapon)
{}

void HumanB::setWeapon(Weapon& weapon)
{
	HumanB::weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << HumanB::name << " attacks with their " << HumanB::weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}
