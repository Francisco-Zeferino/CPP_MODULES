/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:21:08 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/27 12:44:53 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int Contact::checkEmpty(Contact contact)
{
    if(contact.is_empty())
        return 1;
    return 0;
}

void Contact::setId()
{
    static int id;
    this->id = id;
    id++;
}

int Contact::is_empty()
{
    if(this->first_name.empty() || this->last_name.empty() || this->nickname.empty() || this->phone_number.empty() || this->darkest_secret.empty())
    {
        std::cout << "You must fill all fields" << std::endl;
        return 1;
    }
    return 0;
}

void Contact::setData()
{
    std::cout << "Please enter the contact's first name: ";
    std::getline(std::cin, this->first_name); 
    std::cout << "Please enter the contact's last name: ";
    std::getline(std::cin, this->last_name); 
    std::cout << "Please enter the contact's nickname: ";
    std::getline(std::cin, this->nickname); 
    std::cout << "Please enter the contact's phone number: ";
    std::getline(std::cin, this->phone_number); 
    std::cout << "Please enter the contact's darkest secret: ";
    std::getline(std::cin, this->darkest_secret);
    if(this->is_empty())
        this->setData();
}

void Contact::getData()
{
    std::cout << std::right << std::setw(10) << "Contact ID: " << this->id << " | ";
    std::cout << std::right << std::setw(10) << "First name: " << this->first_name << " | ";
    std::cout << std::right << std::setw(10) << "Last name: " << this->last_name << " | ";
    std::cout << std::right << std::setw(10) << "Nickname: " << this->nickname << " | ";
    std::cout << std::right << std::setw(10) << "Phone number: " << this->phone_number << std::endl;
}