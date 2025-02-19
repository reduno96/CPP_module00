/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:17:38 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/19 13:17:39 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ){
    Zombie* multiZombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        multiZombie[i].setName(name);
        multiZombie[i].announce();
    }
    return multiZombie;
}