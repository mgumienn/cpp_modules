#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv) 
{
	if (argc < 2)
	{
		std::cout << "[ Surprisingly Harl is not complaining ]" << std::endl;
		return 1;
	}

	Harl harl;
	harl.complain(argv[1]);
	return 0;
}