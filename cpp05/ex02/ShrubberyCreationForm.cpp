#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("default")
{
    std::cout << "default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery", 145, 137), target(target)
{
    std::cout << "Shrubbery parameter constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
    std::cout << "Shrubbery parameter constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    (void)other;
    std::cout << "assignment not allowed (target is const)" << std::endl;
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

void ShrubberyCreationForm::performExecution() const
{

    std::string fileName = this->target + "_shrubbery";
    std::ofstream file(fileName.c_str());
    if (!file)
    {
        std::cerr << "Could not create file: " << fileName << std::endl;
        return;
    }

    file << "     /\\\n";
    file << "    /**\\\n";
    file << "   /****\\\n";
    file << "  /******\\\n";
    file << " /********\\\n";
    file << "/**********\\\n";
    file << "    ||| \n";
    file.close();
}