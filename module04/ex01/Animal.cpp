#include "Animal.hpp"

Animal::Animal() 
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() 
{
    std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Undefined animal's sound" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
