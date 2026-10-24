#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal default destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

std::string AAnimal::getType() const
{
    return type;
}
