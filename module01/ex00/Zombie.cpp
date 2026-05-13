#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Zombie::_name = name;
}

void Zombie::announce()
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << Zombie::_name << ": *died*" << std::endl;
}