/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:13:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/06 14:17:56 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    std::string level = av[1];
    if (ac != 2)
        return (1);
    Harl harl;
    if(level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
    {
        std::cout << "Invalid level" << std::endl;
        std::cout << "Valid levels are: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return (1);
    }
    harl.complain(level);
    return (0);
}