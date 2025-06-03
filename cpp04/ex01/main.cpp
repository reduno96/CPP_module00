#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int count = 10;
    int i = 0;
    Animal *zoo[count];

    for (; i < count / 2; i++)
        zoo[i] = new Cat();

    for (; i < count; i++)
        zoo[i] = new Dog();

    for (int i = 0; i < count; i++)
        zoo[i]->makeSound();

    for (int i = 0; i < count; i++)
        delete zoo[i];
    return 0;
}