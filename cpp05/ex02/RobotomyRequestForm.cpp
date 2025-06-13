#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("default")
{
    std::cout << "Robotomy default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy deconstructor  called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy", 75, 45), target(target)
{
    std::cout << "Robotomy parameter constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(target)
{
    std::cout << "Robotomy Copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    (void)other;
    std::cout << "Robotomy assignment not allowed (target is const)" << std::endl;
    return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->target;
}

void RobotomyRequestForm::performExecution() const
{
    std::cout << "ZZZZZZ " << std::endl;
    if(std::rand() % 2 == 0)
        std::cout << target << " has been robotomized successfully!\n";
    else
        std::cout << "The robotomy failed.\n";
}