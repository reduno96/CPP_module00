/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:17:34 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/19 18:29:47 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <string>
#include <iostream>

int main (){
    std::string tmp = "HI THIS IS BRAIN";
    std::string *stringPTR = &tmp;
    std::string &stringREF = tmp;

    std::cout << &tmp << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << tmp << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}