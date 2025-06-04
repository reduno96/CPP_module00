#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->brain = new Brain();
    std::cout << "Cat parameterized constructor called" << std::endl;
}
Cat::~Cat()
{
    delete this->brain;
    std::cout << type << " has been destroyed" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        delete this->brain;
        this->type = other.type;
        this->brain = new Brain(*other.brain);
        std::cout << "Cat assignment operator called" << std::endl;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << getType() << " Sound: Moow" << std::endl;
}
