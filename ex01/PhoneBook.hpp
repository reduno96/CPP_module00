#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];

public:
    static int count;
    static int nbrOfContact;
    void addContact();
    void searchContact();
    void display();
};
#endif