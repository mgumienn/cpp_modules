#include <iostream>
#include "phonebook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nEOF detected, Exiting..." << std::endl;
			return 0;
		}
		std::cout << "\n";
		if (command == "ADD")
		{
			phonebook.phonebook_add();
			std::cout << "\n";
		}
		else if (command == "EXIT")
			break;
		else if (command == "SEARCH")
		{
			phonebook.phonebook_search();
			std::cout << "\n";
		}
	}
	return 0;
}