/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:23:37 by rel-mora          #+#    #+#             */
/*   Updated: 2025/03/04 14:19:50 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <limits>

void changeTab(std::string *input)
{
    for (std::string::iterator ite = (*input).begin(); ite != (*input).end(); ite++)
    {
        if (*ite == '\t')
            *ite = ' ';
    }
}

std::string Contact::enterData(std::string in)
{
    std::string input;

    do
    {
        std::cout << "Please enter the " << in << ": \n";

        if (!(std::getline(std::cin, input)))
        {
            exit(0);
        }
        if (input.empty())
        {
            std::cout << "Input cannot be empty. Please try again." << std::endl;
        }
    } while (input.empty());
    changeTab(&input);
    return input;
};

int Contact::checkInput(std::string input)
{
    for (std::string::iterator it = input.begin(); it != input.end(); it++)
    {
        if (!(*it >= '0' && *it <= '9'))
            return 1;
    }
    return 0;
}

void Contact::setFirstName()
{
    firstName = enterData("First Name");
};

void Contact::setLastName()
{
    lastName = enterData("Last Name");
};

void Contact::setNickName()
{
    nickName = enterData("Nick Name");
};
void Contact::setPhoneNumber()
{
    phoneNumber = enterData("Phone Number");
    while (Contact::checkInput(phoneNumber))
    {
        std::cout << "Invalid number\n";
        phoneNumber = enterData("Phone Number");
    }
};

void Contact::setPassword()
{
    password = enterData("Password");
};

void Contact::setIndex(int index)
{
    this->index = index;
};

std::string Contact::getFirstName()
{
    return firstName;
};

std::string Contact::getLastName()
{
    return lastName;
};

std::string Contact::getNickName()
{
    return nickName;
};

std::string Contact::getPhoneNumber()
{
    return phoneNumber;
};

int Contact::getIndex()
{
    return index;
};
