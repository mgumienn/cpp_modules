#include <iostream>
#include "phonebook.hpp"

int main(void)
{
	Phone_Book phone_book;
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
			phone_book.phone_book_add();
			std::cout << "\n";
		}
		else if (command == "EXIT")
			break;
		else if (command == "SEARCH")
		{
			phone_book.phonebook_search();
			std::cout << "\n";
		}
	}
	return 0;
}