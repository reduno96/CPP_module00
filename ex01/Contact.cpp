/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:23:37 by rel-mora          #+#    #+#             */
/*   Updated: 2024/11/21 23:58:24 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <limits>

std::string Contact::enterData(std::string in)
{
    std::string input;

    do {
        std::cout << "Please enter the " << in << ": \n";
        
        if (!(std::getline(std::cin, input))){
            std::exit(0);
        }
        if (input.empty()) {
            std::cout << "Input cannot be empty. Please try again." << std::endl;
        }
    } while (input.empty());
    return input;
};

int Contact::checkInput(std::string input)
{
    for(std::string::iterator it = input.begin(); it != input.end(); it++)
    {
        if (!(*it >= '0' && *it<= '9'))
            return 1;  
    }
    return 0;
}

void Contact::setFirstName(){
    Contact::firstName = enterData("First Name");
};

void Contact::setLastName(){
    Contact::lastName = enterData("Last Name");
};

void Contact::setNickName(){
    Contact::nickName = enterData("Nick Name");
};
void Contact::setPhoneNumber(){
    Contact::phoneNumber = enterData("Phone Number");
    while (Contact::checkInput(phoneNumber))
    {
        std::cout << "Invalid number\n";
        Contact::phoneNumber = enterData("Phone Number");
    }
};

void Contact::setPassword(){
    Contact::password= enterData("Password");
};

void Contact::setIndex(int index){
    Contact::index = index;
};

std::string Contact::getFirstName(){
   return  Contact::firstName;
};

std::string Contact::getLastName(){
     return  Contact::lastName;
};

std::string Contact::getNickName(){
     return  Contact::nickName;
};

std::string Contact::getPhoneNumber(){
     return  Contact::phoneNumber;
};

int Contact::getIndex(){
     return  Contact::index;
};

void Contact::contact_display(){
    
}


