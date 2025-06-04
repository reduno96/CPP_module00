#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    this->brain = new Brain();
    std::cout << "Dog parameterized constructor called" << std::endl;
}
Dog::~Dog()
{
    delete this->brain;
    std::cout << type << " has been destroyed" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        delete this->brain;
        this->type = other.type;
        this->brain = new Brain(*other.brain);
        std::cout << "Dog assignment operator called" << std::endl;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << getType() << " Sound: HHHHHH" << std::endl;
}