#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int gard) : name(name), gard(gard)
{

    std::cout << "parameter constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "destructor constructor called" << std::endl;
}
std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGarde() const
{
    return this->gard;
}
std::ostream &operator<<(std::ostream &os, Bureaucrat stream)
{
    os << stream.getGarde();
    return os;
}
