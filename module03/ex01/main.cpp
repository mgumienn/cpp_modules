#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a("a");
	ScavTrap b("b");

	a.guardGate();
	a.attack("b");
	b.takeDamage(9);
	b.beRepaired(5);
}