#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    const std::string target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

    void performExecution() const;

    std::string getTarget() const;

    ~ShrubberyCreationForm();
};

#endif