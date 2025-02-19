/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:17:41 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/19 13:17:43 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    void announce( void );
    Zombie* newZombie( std::string name );
    Zombie* zombieHorde( int N, std::string name );
    std::string getName(void);
    void setName(std::string name);
    Zombie();
    ~Zombie();
};
