/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:52:46 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/24 14:56:20 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact createContact()
{
    Contact contact;
    contact.setData();
    return contact;
}

Contact getContact()
{
    Contact contact;
    contact.getData();
    return contact;
}

int main(void)
{
    Phonebook phonebook;
    std::string command;
    
    start :
    std::cout << "Welcome to Phonebook" << std::endl;
    std::cout << "Please enter a command: ";
    std::cin >> command;
    if(command == "ADD")
        phonebook.add_contact(createContact());
    else if(command == "SEARCH")
        phonebook.display_contact();
    else if(command == "EXIT")
        return 0;
    else
        std::cout << "Invalid command" << std::endl;
    goto start;
}