/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:24:51 by rel-mora          #+#    #+#             */
/*   Updated: 2024/11/15 11:54:07 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::count;
void PhoneBook::display()
{
    std::cout << count;
    std::cout << "Redouane el morabet \n";
    count++;
}