#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat parameterized constructor called" << std::endl;
}
Cat::~Cat()
{
    std::cout << type << " has been destroyed" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "Cat assignment operator called" << std::endl;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << getType() << " Sound: Moow" << std::endl;
}
