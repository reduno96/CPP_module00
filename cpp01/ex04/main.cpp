/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <reduno96@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 23:13:40 by rel-mora          #+#    #+#             */
/*   Updated: 2025/05/14 17:42:15 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void createFile(std::string content, std::string file)
{
    std::string nameFile = file + ".replace";
    std::ofstream replaceFile(nameFile.c_str());
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

        if (s1.empty())
        {
            std::cout << "Error: s1 must not be empty!!" << std::endl;
            return 1;
        }
        if (!fileName)
        {
            std::cout << "Error: The file not opening!!" << std::endl;
            return 1;
        }
        else
        {
            std::string line;
            std::string content;
            bool firstLine = true;

            while (std::getline(fileName, line))
            {
                if (!firstLine)
                    content += '\n';
                content += line;
                firstLine = false;
            }

            size_t pos = 0;
            while ((pos = content.find(s1, pos)) != std::string::npos)
            {
                content.erase(pos, s1.length());
                content.insert(pos, s2);
                pos += s2.length();
            }
            createFile(content, av[1]);
            fileName.close();
        }
    }
    else
        std::cout << "Error: something is Wrong!!" << std::endl;
    return 0;
}