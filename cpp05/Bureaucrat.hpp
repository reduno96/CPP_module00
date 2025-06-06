#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
    private:
    const std::string name;
    int gard; 
    public:
    Bureaucrat();
    Bureaucrat(std::string name, int gard);
    ~Bureaucrat();

    std::string getName() const ;
    int getGarde() const ;

};
    std::ostream &operator<<(std::ostream &os, Bureaucrat stream);

#endif