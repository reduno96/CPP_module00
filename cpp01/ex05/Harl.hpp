/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:09:16 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/24 02:47:35 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
   
public:
    Harl();
    ~Harl();
    void complain( std::string level );
    
};
#endif