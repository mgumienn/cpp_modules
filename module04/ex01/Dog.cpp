#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    type = "dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
    delete brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        type = other.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "WOOF" << std::endl;
}