#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::setname(std::string name)
{
	Zombie::name = name;
}

void Zombie::announce()
{
	if(Zombie::name.empty())
	{
		std::cout << "Something went wrong and I don't have name... *sad zombie noises*" << std::endl;
		return;
	}
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	if(Zombie::name.empty())
	{
		std::cout << "Unnamed: *died*" << std::endl;
		return;
	}
	std::cout << Zombie::name << ": *died*" << std::endl;
}