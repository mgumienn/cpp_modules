#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		Contact contacts[8];
		int contact_count;
	public:
		PhoneBook();
		void phonebook_add();
		void phonebook_search();	
};

#endif