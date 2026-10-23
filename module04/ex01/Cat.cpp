#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    type = "cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
    delete brain;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
	    type = other.type;
	}
	return *this;
}

void Cat::makeSound() const
{
    std::cout << "MEEEEEEEEEEEEEEEOW" << std::endl;
}