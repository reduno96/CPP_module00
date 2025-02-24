/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 23:13:40 by rel-mora          #+#    #+#             */
/*   Updated: 2025/02/24 00:59:17 by rel-mora         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <string>
#include <iostream>
#include <fstream>

void createFile(std::string content)
{
    std::ofstream replaceFile("replaceFile");
    if (!replaceFile)
        std::cout << "Error: to create file!!" << std::endl;
    else
    {
        replaceFile << content;
        std::cout << "Success:!!";
    }
}
int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream fileName(av[1]);
        std::string s1 = av[2];
        std::string s2 = av[3];

        if (!fileName)
        {
            std::cout << "Error: The file not opening!!" << std::endl;
            return 1;
        }
        else
        {
            std::string line;
            std::string content;
            while (std::getline(fileName, line))
                content += line;
            size_t posS1 = content.find(s1);
            content.erase(posS1, s1.length());
            content.append(s2);
            createFile(content);
            fileName.close();
        }
    }
    else
        std::cout << "Error: something is Wrong!!" << std::endl;
    return 0;
}