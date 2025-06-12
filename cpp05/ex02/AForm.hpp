#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;

public:
    AForm();
    virtual ~AForm();
    AForm(std::string name, const int gradeToSign, const int gradeToExecute);
    AForm(const AForm &other);
    AForm &operator=(const AForm &other);
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(const Bureaucrat &bureaucrat);

    void execute(Bureaucrat const &executor) const;
    virtual void performExecution() const = 0;

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const AForm &stream);

#endif