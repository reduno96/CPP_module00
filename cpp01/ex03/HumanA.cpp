/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:35:30 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/14 14:07:29 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

std::string HumanA::getName()
{
    return this->name;
}

void HumanA::setName(std::string name)
{
    this->name = name;
}
void HumanA::attack()
{
    std::cout << getName()
              << " attacks with their "
              << weapon.getType() << std::endl;
}