#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	Weapon::_type = type;
}

void Weapon::setType(std::string newType)
{
	Weapon::_type = newType;
}

std::string& Weapon::getType()
{
	std::string& typeRef = Weapon::_type;
	return typeRef;
}

Weapon::~Weapon()
{}