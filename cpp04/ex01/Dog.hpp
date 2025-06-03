#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <string>
#include <iostream>

class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog();
    ~Dog();
    Dog(std::string type);
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    void makeSound() const;
};

#endif