#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "contact.hpp"
#include <iostream>

class Phone_Book
{
	private:
		Contact contacts[8];
		int contact_count;
		int oldest_index;
	public:
		Phone_Book();
		void phone_book_add();
		
};

#endif