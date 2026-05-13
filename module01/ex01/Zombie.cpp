#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::setname(std::string name)
{
	Zombie::_name = name;
}

void Zombie::announce()
{
	if(Zombie::_name.empty())
	{
		std::cout << "Something went wrong and I don't have name... *sad zombie noises*" << std::endl;
		return;
	}
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	if(Zombie::_name.empty())
	{
		std::cout << "Unnamed: *died*" << std::endl;
		return;
	}
	std::cout << Zombie::_name << ": *died*" << std::endl;
}