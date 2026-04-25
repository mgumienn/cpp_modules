#include <iostream>
#include "Harl.hpp"

int main(void) 
{
	std::string level;
	Harl harl;

	std::cout << "Harl is just about to complain! Choose a level you want to hear (DEBUG / INFO / WARNING / ERROR)" << std::endl;
	std::getline(std::cin, level);
	harl.complain(level);
	while (true)
	{
		std::cout << "Harl is just about to complain AGAIN! Choose a level you want to hear (DEBUG / INFO / WARNING / ERROR)" << std::endl;
		std::getline(std::cin, level);
		harl.complain(level);
	}
}