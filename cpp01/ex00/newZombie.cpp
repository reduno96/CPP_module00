/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:26:11 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/19 13:26:15 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name ){
    Zombie* newZombie = new Zombie();
    newZombie->name  = name;
    return newZombie;
} 