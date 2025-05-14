/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:37:51 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/14 10:13:41 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}
Weapon::~Weapon()
{
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string &Weapon::getType(void) const
{
    return this->type;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}