/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:33:24 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/19 18:55:52 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon();
    ~Weapon();
    std::string getType() const;
    void setType(std::string type);
};

#endif