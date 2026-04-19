#include "Zombie.hpp"

int main()
{
	randomChump("Foo");
	Zombie* zdzis = newZombie("Zdziś");
	zdzis->announce();
	delete zdzis;
	return 0;
}