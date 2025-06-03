#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
private:
public:
    Cat();
    Cat(std::string type);
    ~Cat();

    Cat(const Cat &other);
    Cat &operator=(const Cat &other);

    void makeSound() const;
};

#endif