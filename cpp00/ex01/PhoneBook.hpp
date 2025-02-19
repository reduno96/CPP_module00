/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:28:20 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/19 13:28:21 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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