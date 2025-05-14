/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:17:34 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/07 17:01:06 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    std::string name = "MotivRed";

    Zombie *horde = zombieHorde(N, name);

    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }

    delete[] horde;

    return 0;
}
