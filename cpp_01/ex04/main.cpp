/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:28:32 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/05 17:38:58 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileHandling.hpp"
#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    FileHandler *fileHandler;
    std::string fileName; 
    std::string s1;
    std::string s2;

    if (ac != 4 || !av[2][0]|| !av[3][0])
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    fileName = av[1];
    s1 = av[2];
    s2 = av[3];
    fileHandler = new FileHandler(fileName, s1, s2);
    fileHandler->createNewFile();
    fileHandler->replace();
    delete fileHandler;
}