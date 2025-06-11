#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(0), gradeToExecute(0)
{

    std::cout << "default constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "destructor called" << std::endl;
}

Form::Form(std::string name, const int gradeToSign, const int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (this->gradeToSign < 1 || this->gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->gradeToSign > 150 || this->gradeToExecute > 150)
        throw Form::GradeTooLowException();
    std::cout << "parameter constructor called" << std::endl;
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        this->isSigned = other.getIsSigned();
    }
    std::cout << "assignment operator called" << std::endl;

    return *this;
}
std::string Form::getName() const
{
    return this->name;
}
int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}

bool Form::getIsSigned() const
{
    return this->isSigned;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > getGradeToSign())
        throw Form::GradeTooLowException();

    this->isSigned = true;
}
const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too Heigh";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}
std::ostream &operator<<(std::ostream &os, const Form &stream)
{
    os << " Name " << stream.getName() << " Garde require to sign  " << stream.getGradeToSign() << " Garde require to execute " << stream.getGradeToExecute();
    return os;
}