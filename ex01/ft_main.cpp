/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:17:22 by rel-mora          #+#    #+#             */
/*   Updated: 2024/11/15 11:48:22 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main ()
{
    PhoneBook listOfContact[8];

    for(int i = 0; i < 8; i++)
    {
        listOfContact[i].display();
    }
    
}