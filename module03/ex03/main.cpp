#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	DiamondTrap dt("Monster");

	std::cout << "\n";
	dt.whoAmI();

	std::cout << "\nTEST ATAKU I STATYSTYK (HP=100, EP=50, AD=30)" << std::endl;
	dt.attack("TargetDummy");
	dt.takeDamage(20);
	dt.beRepaired(10);

	std::cout << "\nTEST ODZIEDZICZONYCH SPECJALNYCH UMIEJETNOSCI" << std::endl;
	dt.guardGate();
	dt.highFivesGuys();

	std::cout << "\n";
	DiamondTrap copy(dt);
	copy.whoAmI();
	std::cout << "\n";

	return 0;
}