#include "contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

void Contact::set_contact(std::string name, std::string surname, std::string nick, std::string phone, std::string secret)
{
	first_name = name;
	last_name = surname;
	nickname = nick;
	phone_number = phone;
	darkest_secret = secret;
	std::cout << "Contact added successfully!" << std::endl;
}

void Contact::show_contact()
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

void Contact::show_contact_short(int index)
{
	std::cout << "|" << std::setw(10) << index << "|";
	if (first_name.length() > 10)
		std::cout << std::setw(10) << first_name.substr(0, 8) + "." << "|";
	else
		std::cout << std::setw(10) << first_name << "|";
	if (last_name.length() > 10)
		std::cout << std::setw(10) << last_name.substr(0, 8) + "." << "|";
	else
		std::cout << std::setw(10) << last_name << "|";
	if (nickname.length() > 10)
		std::cout << std::setw(10) << nickname.substr(0, 8) + "." << "|" << std::endl;
	else
		std::cout << std::setw(10) << nickname << "|" << std::endl;

}