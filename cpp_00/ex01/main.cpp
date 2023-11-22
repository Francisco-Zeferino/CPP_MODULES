/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:52:46 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/22 17:15:13 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    Phonebook phonebook;
    std::string command;
    
    start :
    std::cout << "Welcome to Phonebook" << std::endl;
    std::cout << "Please enter a command: ";
    std::cin >> command;
    if(command == "ADD")
        add_contact(&phonebook);
    else if(command == "SEARCH")
        std::cout << "SEARCH" << std::endl;
    else if(command == "EXIT")
        std::cout << "EXIT" << std::endl;
    else if(command == "DISPLAY")
        display_contact(&phonebook);
    else
        std::cout << "Invalid command" << std::endl;
    goto start;
}