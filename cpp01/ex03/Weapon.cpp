/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:37:51 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/19 18:58:52 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType(void) const
{
    return this->type;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}