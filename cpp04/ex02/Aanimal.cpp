#include "Aanimal.hpp"

Aanimal::Aanimal()
{
    this->type = "Aanimal";
    std::cout << this->getType() << ": Default constructor called" << std::endl;
}

Aanimal::Aanimal(std::string type)
{
    this->type = type;
    std::cout << this->getType() << ": Parameterized constructor called" << std::endl;
}

Aanimal::~Aanimal()
{
    std::cout << "Aanimal has been destroyed" << std::endl;
}

Aanimal::Aanimal(const Aanimal &other)
{
    std::cout << "Aanimal copy constructor called" << std::endl;
    *this = other;
}
Aanimal &Aanimal::operator=(const Aanimal &other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "Aanimal assignment operator called" << std::endl;
    }
    return *this;
}

std::string Aanimal::getType() const
{
    return this->type;
}

void Aanimal::setType(const std::string &type)
{
    this->type = type;
}
