/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:24:51 by rel-mora          #+#    #+#             */
/*   Updated: 2025/03/04 14:42:22 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>

#include "PhoneBook.hpp"

int count = 0;
int PhoneBook::nbrOfContact = 0;

void PhoneBook::addContact()
{
    if (count == 8)
        count = 0;
    contacts[count].setFirstName();
    contacts[count].setLastName();
    contacts[count].setNickName();
    contacts[count].setPhoneNumber();
    contacts[count].setPassword();
    contacts[count].setIndex(count);
    std::cout << "\n\n\n***********************************************\n";
    std::cout << "Have successfully saved.                      *\n";
    std::cout << "***********************************************\n\n\n";
    count++;
    if (nbrOfContact != 8)
        nbrOfContact++;
}
std::string handleOutput(std::string str)
{
    std::string pure;
    if (str.length() > 10)
    {
        pure = str.substr(0, 9);
        pure.append(".");
    }
    else
        return str;
    return pure;
}

int stringToInt(std::string str)
{
    std::stringstream ss(str);
    int result;
    ss >> result;
    return result;
}

void PhoneBook::searchContact()
{
    int in;
    std::string indx;
    int found = 0;

    if (this->nbrOfContact == 0)
    {
        std::cout << "Sorry there are any contact in The PhoneBook" << std::endl;
        return;
    }
    for (int i = 0; i < this->nbrOfContact; i++)
    {
        std::cout << "********************************************" << std::endl;
        std::cout << std::setw(10) << std::right << contacts[i].getIndex();
        std::cout << "|";
        std::cout << std::setw(10) << std::right << handleOutput(contacts[i].getFirstName());
        std::cout << "|";
        std::cout << std::setw(10) << std::right << handleOutput(contacts[i].getLastName());
        std::cout << "|";
        std::cout << std::setw(10) << std::right << handleOutput(contacts[i].getNickName());
        std::cout << "*\n";
        std::cout << "********************************************\n";
    }
    while (!found)
    {
        std::cout << "Enter the index of the contact to display:" << std::endl;
        if (!(std::getline(std::cin, indx)))
            std::exit(0);
        std::cout << std::endl;
        if (contacts->checkInput(indx))
        {
            std::cout << "invalid Index" << std::endl;
        }
        else
        {
            in = stringToInt(indx);
            if (in >= 0 && in < this->nbrOfContact)
            {
                std::cout << "index | " << contacts[in].getIndex() << std::endl;
                std::cout << "********************************************" << std::endl;
                std::cout << "First Name| " << contacts[in].getFirstName() << std::endl;
                std::cout << "********************************************" << std::endl;
                std::cout << "Last Name| " << contacts[in].getLastName() << std::endl;
                std::cout << "********************************************" << std::endl;
                std::cout << "Nick Name| " << contacts[in].getNickName() << std::endl;
                std::cout << "********************************************" << std::endl;
                std::cout << "Phone Number| " << contacts[in].getPhoneNumber() << std::endl;
                std::cout << "********************************************" << std::endl;
                found = 1;
            }
            else
                continue;
        }
        if (!found)
        {
            std::cout << "Index not found\n";
            std::cin.clear();
        }
    }
}

void PhoneBook::display()
{
    std::cout << count;
    std::cout << "Redouane el morabet \n";
}