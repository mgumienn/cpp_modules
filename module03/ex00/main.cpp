#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a("a");
	ClapTrap b("b");

	a.attack("b");
	b.takeDamage(9);
	b.beRepaired(5);

}