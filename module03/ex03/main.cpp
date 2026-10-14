#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "=== 1. TWORZENIE DIAMONDTRAP ===" << std::endl;
	DiamondTrap dt("Monster");

	std::cout << "\n=== 2. TEST WHOAMI ===" << std::endl;
	dt.whoAmI();

	std::cout << "\n=== 3. TEST ATAKU I STATYSTYK (HP=100, EP=50, AD=30) ===" << std::endl;
	dt.attack("TargetDummy"); // Powinien uzyc attack() ze ScavTrap i zadac 30 obrazen (z FragTrap)
	dt.takeDamage(20);        // Powinien pokazac 80 HP (100 - 20) i 49 EP (50 - 1 za atak)
	dt.beRepaired(10);        // Powinien pokazac 90 HP i zuzyc 1 EP

	std::cout << "\n=== 4. TEST SPECJALNYCH UMIEJETNOSCI RODZICOW ===" << std::endl;
	dt.guardGate();           // Ze ScavTrap
	dt.highFivesGuys();       // Z FragTrap

	std::cout << "\n=== 5. TEST KOPIOWANIA (OCF) ===" << std::endl;
	DiamondTrap copy(dt);
	copy.whoAmI();

	std::cout << "\n=== 6. NISZCZENIE OBIEKTOW (KOLEJNOSC ODWROTNA) ===" << std::endl;
	return 0;
}