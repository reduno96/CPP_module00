#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << this->getType() << ": Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << this->getType() << ": Parameterized constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal has been destroyed" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}
Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "Animal assignment operator called" << std::endl;
    }
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::setType(const std::string &type)
{
    this->type = type;
}
void Animal::makeSound() const
{
    std::cout << "Generic animal sound" << std::endl;
}