/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:40:12 by rel-mora          #+#    #+#             */
/*   Updated: 2024/11/15 08:13:43 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
    for(int i = 1; i < ac; i++)
    {
        std::string it = av[i];
        for(std::string::iterator text = it.begin(); text != it.end(); text++)
            std::cout << static_cast<char>(std::toupper(*text));
    }
    std::cout << std::endl;
    return 0;
}
