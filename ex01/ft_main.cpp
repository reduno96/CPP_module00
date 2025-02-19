/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:17:22 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/17 12:28:11 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string input;
    int stop;

    stop = 1;
    std::cout << "Welcome To 80s PhoneBook.\n";
    while (stop)
    {
        std::cout << std::endl;
        std::cout << "Please Enter your Command From the Menu:\n";
        std::cout << "***********************************************\n";
        std::cout << "* -ADD: save a new contact.                   *\n";
        std::cout << "* -SEARCH: display a specific contact.        *\n";
        std::cout << "* -EXIT: Exit The Program.                    *\n";
        std::cout << "***********************************************" << std::endl;

        if (!(std::getline(std::cin, input)))
            std::exit(0);
        std::cout << std::endl;
        if (input == "EXIT")
        {
            stop = 0;
        }
        else if (input == "ADD")
        {
            phoneBook.addContact();
        }
        else if (input == "SEARCH")
        {
            phoneBook.searchContact();
        }
        else
        {
            std::cout << "!!!!!Invalid input." << std::endl
                      << std::endl;
        }
    }
    std::cout << "Bye!!" << std::endl;
    return 0;
}