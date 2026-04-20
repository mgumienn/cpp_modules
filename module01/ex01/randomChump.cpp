#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie z = Zombie();
	z.setname(name);
	z.announce();
}