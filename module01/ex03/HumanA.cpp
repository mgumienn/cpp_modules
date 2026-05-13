#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

void HumanA::attack()
{
	std::cout << HumanA::_name << " attacks with their " << HumanA::_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{}