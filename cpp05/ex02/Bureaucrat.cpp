#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
    std::cout << "default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{

    std::cout << "destructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "parameter constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    this->grade = other.getGrade();
    std::cout << "copy constructor called" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->grade = other.getGrade();
    }
    std::cout << "assignment operator called" << std::endl;

    return *this;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

void Bureaucrat::increment()
{
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}
void Bureaucrat::decrement()
{
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

void Bureaucrat::signForm(AForm &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->getName();
        std::cout << " signed ";
        std::cout << f.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << this->getName();
        std::cout << " couldn't sign ";
        std::cout << f.getName();
        std::cout << " because " << e.what() << std::endl;
    }
}
int Bureaucrat::getGrade() const
{
    return this->grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too Low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &stream)
{
    os << stream.getName() << ", bureaucrat grade " << stream.getGrade();
    return os;
}
