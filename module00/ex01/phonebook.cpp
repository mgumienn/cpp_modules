#include "phonebook.hpp"

int ft_stoi(std::string str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while ((str[i] <= '\r' && str[i] >= '\t') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (n * sign);

}

bool is_positive_nbr(std::string str)
{
	if (str.empty())
		return false;
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

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
	if (contact_count == 0)
	{
		std::cout << "Your phone book is empty :c";
		return ;
	}
	std::string input;
	std::cout << "|" << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	for (int i = 0; i < contact_count; i++)
		contacts[i].show_contact_short(i);
	std::cout << "---------------------------------------------" << std::endl;
	while (true)
	{
		std::cout << "\nEnter index number to display contact or EXIT to go back: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "EOF detected, going back.." << std::endl;
			return ;
		}
		else if (input == "EXIT")
			return ;
		else if (is_positive_nbr(input))
		{
			int i = ft_stoi(input);
			if (i >= 0 && i < contact_count)
				contacts[i].show_contact();
			else
				std::cout << "No contact with this index found" << std::endl;
		}
	}
}