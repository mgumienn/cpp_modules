#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(Brain const &other) {
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Brain::operator=(other);
    }
    return *this;
}
