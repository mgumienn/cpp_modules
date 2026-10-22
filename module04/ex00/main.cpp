#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    std::cout << std::endl;
    meta->makeSound();
    std::cout << std::endl;

    std::cout << "---------------WrongAnimal & WrongCat---------------" << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_i = new WrongCat();
    std::cout << "\n" << wrong_i->getType() << std::endl;
    wrong_i->makeSound();
    std::cout << std::endl;
    wrong_meta->makeSound();
    return 0;
}