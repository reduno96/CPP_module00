#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "default constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "destructor called" << std::endl;
}

AForm::AForm(std::string name, const int gradeToSign, const int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (this->gradeToSign < 1 || this->gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (this->gradeToSign > 150 || this->gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    std::cout << "parameter constructor called" << std::endl;
}

AForm::AForm(const AForm &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->isSigned = other.getIsSigned();
    }
    std::cout << "assignment operator called" << std::endl;

    return *this;
}
std::string AForm::getName() const
{
    return this->name;
}
int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}

int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}

bool AForm::getIsSigned() const
{
    return this->isSigned;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > getGradeToSign())
        throw AForm::GradeTooLowException();

    this->isSigned = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw AForm::GradeTooLowException();

    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    this->performExecution();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade Too Heigh";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade Too Low";
}
std::ostream &operator<<(std::ostream &os, const AForm &stream)
{
    os << " Name " << stream.getName() << " Garde require to sign  " << stream.getGradeToSign() << " Garde require to execute " << stream.getGradeToExecute();
    return os;
}