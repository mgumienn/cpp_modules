#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		void set_contact(std::string name, std::string surname, std::string nick,
			std::string phone, std::string secret);
		void show_contact();
};

#endif