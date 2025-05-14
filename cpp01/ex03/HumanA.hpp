/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:35:33 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/14 11:23:45 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &weapon;
    std::string name;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    std::string getName();
    void setName(std::string name);
    Weapon getWeapon();
    void setWeapon(Weapon weapon);
    void attack();
};

#endif