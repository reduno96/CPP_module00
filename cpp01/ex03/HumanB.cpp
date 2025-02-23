/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:35:37 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/23 22:57:33 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanB.hpp"

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

Weapon* HumanB::getWeapon()
{
    return this->weapon;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

std::string HumanB::getName(){
    return this->name;
}

void HumanB::setName(std::string name){
    this->name = name;
}
void HumanB::attack()
{
    std::cout << getName()
              << " attacks with their "
              << weapon->getType() << std::endl;
}