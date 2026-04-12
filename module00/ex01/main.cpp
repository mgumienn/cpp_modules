#include <iostream>
#include "phonebook.hpp"

int main(void)
{
	Phone_Book phone_book;
	std::string command;

	while (true)
	{
		std::cout << "--->	Enter a command (ADD, SEARCH, EXIT)	<---" << std::endl;
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nEOF detected, Exiting..." << std::endl;
		}
		if (command == "ADD")
			phone_book.phone_book_add();
		else if (command == "EXIT")
			break;
		else
		{
			std::cout << command << ": command not found" << std::endl;
		}
	}
	return 0;
}