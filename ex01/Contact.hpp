/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:26:25 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/17 12:19:50 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string password;
    int index;

public:
    std::string enterData(std::string in);
    int checkInput(std::string input);
    void setFirstName();
    void setLastName();
    void setNickName();
    void setPhoneNumber();
    void setPassword();
    void setIndex(int index);
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    int getIndex();
};
#endif