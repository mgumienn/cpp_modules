#include "Cat.hpp"

Cat::Cat() 
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() 
{
    std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat& operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Cat::operator=(other);
	}
	return *this;
}

void Cat::makeSound()
{
    std::cout << "MEEEEEEEEEEEEEEEOW" << std::endl;
}