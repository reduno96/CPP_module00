#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << type << " has been destroyed" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "Dog assignment operator called" << std::endl;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << getType() << " Sound: HHHHHH" << std::endl;
}