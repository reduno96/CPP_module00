/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:40:12 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/17 12:59:14 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
    for(int i = 1; i < ac; i++)
    {
        std::string text = av[i];
        for(std::string::iterator ite = text.begin(); ite != text.end(); ite++)
            std::cout << static_cast<char>(std::toupper(*ite));
    }
    std::cout << std::endl;
    return 0;
}
