#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << "_______________________________________________" << std::endl;
        Bureaucrat b("redouane", 10);
        for (int i = 3; i < 10; i++)
        {
            std::cout << b;
            b.increment();
        }
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << "_______________________________________________" << std::endl;
        Bureaucrat b("Said", 149);
        for (int i = 3; i < 10; i++)
        {
            std::cout << b;
            b.decrement();
        }
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
        std::cout << e.what() << std::endl;
    }

    Bureaucrat n("achraf", 15);
    Bureaucrat m;
    m = n;
    std::cout << m.getName() << std::endl;
    std::cout << m.getGrade() << std::endl;
    std::cout << "I'm Here" << std::endl;
    return 0;
}