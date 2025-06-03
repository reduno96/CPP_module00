#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << this->getType() << ": Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << this->getType() << ": Parameterized constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    this->type = other.type;
    std::cout << this->getType() << ": Copy constructor called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << this->getType() << ": Assignment operator called" << std::endl;
    }
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal has been destroyed" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}
void WrongAnimal::makeSound() const
{
    std::cout << "Generic WrongAnimal sound" << std::endl;
}