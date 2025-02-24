/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 02:09:01 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/24 02:36:58 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Harl.hpp"

int main(int ac, char **av){
    if (ac == 2){
        Harl ff = Harl();
        ff.complain(av[1]);
    }
    else
        std::cout << "Error: your're enter invalid argument!!\n";
}