#include "Zombie.hpp"

int main()
{
	int N = 10;
	randomChump("Foo"); 						//stack
	Zombie GIS = Zombie();
	GIS.announce();
	Zombie* zdzis = newZombie("Zdziś"); 		//heap
	zdzis->announce();
	Zombie* horde = zombieHorde(N, "Czesiek");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	delete zdzis;
	return 0;
}