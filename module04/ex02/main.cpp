#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"

int main()
{
    AAnimal* dog = new Cat();

    dog->makeSound();

    delete dog;
    return 0;
}