/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:17:34 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/14 19:15:55 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string tmp = "HI THIS IS BRAIN";
    std::string *stringPTR = &tmp;
    std::string &stringREF = tmp;

    std::cout << &tmp << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << tmp << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}