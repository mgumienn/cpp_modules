#include "phonebook.hpp"

bool phone_number_verification(std::string phone_number)
{
	for(int i = 0; phone_number[i]; i++)
	{
		char c = phone_number[i];

		if (!isdigit(c) && (i != 0 && c == '+'))
			return (false);
	}
	return (true);
}

Phone_Book::Phone_Book() : contact_count(0)
{

}

void Phone_Book::phone_book_add()
{
	std::string first_name, last_name, nickname, phone_number, darkest_secret;

	std::cout << "To add a new contact fill the data below" << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty()
		|| darkest_secret.empty())
	{
		std::cout << "ERROR: empty lines in contact!" << std::endl;
	}
	else if (!phone_number_verification(phone_number))
		std::cout << "ERROR: incorrect phone number" <<std::endl;
	else
	{
		contacts[contact_count % 8 ].set_contact(first_name, last_name, nickname, phone_number, darkest_secret);
		contact_count++;
	}
}


void Phone_Book::phonebook_search()
{
	std::cout << "|" << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	for (int i = 0; i < contact_count; i++)
		contacts[i].show_contact_short(i);
	std::cout << "---------------------------------------------" << std::endl;	
}