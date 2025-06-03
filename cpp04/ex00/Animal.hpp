#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(std::string type);
    virtual ~Animal();

    Animal(const Animal &other);
    Animal &operator=(const Animal &other);

    std::string getType() const;
    void setType(const std::string &type);

    virtual void makeSound() const;
};

#endif