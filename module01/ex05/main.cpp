#include <iostream>
#include "Harl.hpp"

int main(void) 
{
	// "DEBUG", "INFO", "WARNING", "ERROR"
	std::string level;
	Harl harl;

	std::cout << "Harl is just about to complain choose a level you want to hear (DEBUG / INFO / WARNING / ERROR)" << std::endl;
	std::getline(std::cin, level);
	harl.complain(level);
}