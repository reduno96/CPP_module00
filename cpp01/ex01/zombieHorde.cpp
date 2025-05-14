/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:17:38 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/14 09:16:44 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *multiZombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        multiZombie[i].setName(name);
    }
    return multiZombie;
}