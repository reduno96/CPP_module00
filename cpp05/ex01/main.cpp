#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat a("redouane", 45);
    Form form("C+", 40, 50);
    Form form2("D+", 50, 60);
    a.signForm(form);
    a.signForm(form2);
    return 0;
}