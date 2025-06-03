#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat parameterized constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "WrongCat assignment operator called" << std::endl;
    }
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << type << " has been destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << getType() << " Sound: Moow" << std::endl;
}
