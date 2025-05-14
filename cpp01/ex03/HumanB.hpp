/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:35:40 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/14 11:30:20 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string name;

public:
    HumanB(std::string name);
    ~HumanB();
    std::string getName();
    void setName(std::string name);
    Weapon *getWeapon();
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif