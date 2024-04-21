/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:52:46 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 10:45:06 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact createContact()
{
    Contact contact;
    contact.setId();
    contact.setData();
    return contact;
}

int main(void)
{
    Phonebook phonebook;
    std::string command;
    while(!std::cin.eof())
    {
        std::cout << "Welcome to Phonebook" << std::endl;
        std::cout << "The available commands are: ADD, SEARCH and EXIT" << std::endl;
        std::cout << "Please enter a command: ";
        std::getline(std::cin, command);
        if(command == "ADD")
            phonebook.addContact(createContact());
        else if(command == "SEARCH")
            phonebook.displayAll();
        else if(command == "EXIT")
            return 0;
        else
            std::cout << "Invalid command" << std::endl;
    }
}