#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : virtual Animal
{
	public:
        Cat();
		~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		void makeSound();
};

#endif