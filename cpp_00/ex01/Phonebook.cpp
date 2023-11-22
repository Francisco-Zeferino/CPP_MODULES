/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:55:49 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/22 17:18:50 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void add_contact(Phonebook *phonebook)
{
    static int id;
    
    std::cout << "Please enter the contact's first name: ";
    std::cin >> phonebook->contacts[id].first_name;
    std::cout << "Please enter the contact's last name: ";
    std::cin >> phonebook->contacts[id].last_name;
    std::cout << "Please enter the contact's nickname: ";
    std::cin >> phonebook->contacts[id].nickname;
    std::cout << "Please enter the contact's phone number: ";
    std::cin >> phonebook->contacts[id].phone_number;
    std::cout << "Please enter the contact's darkest secret: ";
    std::cin >> phonebook->contacts[id].darkest_secret;
    id++;
}

void display_contact(Phonebook *phonebook)
{
    int i = 0;
    while(i < 8)
    {
        std::cout << phonebook->contacts[i].first_name << std::endl;
        i++;
    }
}