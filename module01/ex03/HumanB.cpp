#include "HumanB.hpp"

Weapon defaultWeapon = Weapon("bare hands");

HumanB::HumanB(std::string name) : _name(name), _weapon(&defaultWeapon)
{}

void HumanB::setWeapon(Weapon& weapon)
{
	HumanB::_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << HumanB::_name << " attacks with their " << HumanB::_weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}
