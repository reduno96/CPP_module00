#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class Aanimal
{
protected:
    std::string type;

public:
    Aanimal();
    Aanimal(std::string type);
    virtual ~Aanimal();

    Aanimal(const Aanimal &other);
    Aanimal &operator=(const Aanimal &other);

    std::string getType() const;
    void setType(const std::string &type);

    virtual void makeSound() const = 0;
};

#endif