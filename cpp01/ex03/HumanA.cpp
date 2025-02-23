/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:35:30 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/22 15:17:11 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanA.hpp"

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

Weapon HumanA::getWeapon()
{
    return this->weapon;
}
void HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

std::string HumanA::getName(){
    return this->name;
}

void HumanA::setName(std::string name){
    this->name = name;
}
void HumanA::attack()
{
    std::cout << getName()
              << " attacks with their "
              << weapon.getType() << std::endl;
}