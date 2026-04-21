#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	Weapon::type = type;
}

void Weapon::setType(std::string newType)
{
	Weapon::type = newType;
}

std::string& Weapon::getType()
{
	std::string& typeRef = Weapon::type;
	return typeRef;
}

Weapon::~Weapon()
{}