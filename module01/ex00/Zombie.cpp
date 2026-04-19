#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Zombie::name = name;
}

void Zombie::announce()
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << Zombie::name << ": *died*" << std::endl;
}