/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:26:26 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/07 15:44:04 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
class Zombie
{
private:
    std::string name;

public:
    void announce(void);
    std::string getName(void);
    void setName(std::string name);
    Zombie();
    Zombie(std::string name);
    ~Zombie();
};
Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif