/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:26:26 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/24 02:46:14 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
class Zombie
{
private:
    std::string name;
public:
    void announce( void );
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
    std::string getName(void);
    void setName(std::string name);
    Zombie(/* args */);
    ~Zombie();
};
#endif