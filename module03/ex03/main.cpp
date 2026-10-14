#include "FragTrap.hpp"

int main(void) {
	FragTrap a("a");
	FragTrap b("b");

	a.attack("b");
	b.takeDamage(9);
	b.beRepaired(5);
	a.highFivesGuys();
}