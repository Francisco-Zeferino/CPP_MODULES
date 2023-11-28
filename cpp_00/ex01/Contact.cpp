/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:21:08 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/28 14:18:37 by ffilipe-         ###   ########.fr       */
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
        return 1;
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
    {
        std::cout << "You must fill all fields" << std::endl;
        this->setData();
    }
}

void Contact::getContactData()
{
    std::cout << "Contact ID : " << this->id << std::endl;
    std::cout << "First Name : " << this->first_name << std::endl;
    std::cout << "Last Name  : " << this->last_name << std::endl;
    std::cout << "Nickname   : " << this->nickname << std::endl;
}

void Contact::getPhonebookData()
{
    std::cout << std::setw(10) << std::right << this->id << "|";
    if(this->first_name.size() > 9)
        std::cout << std::setw(10) << std::right << this->first_name.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << std::right << this->first_name << "|";
    if(this->last_name.size() > 9)
        std::cout << std::setw(10) << std::right << this->last_name.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << std::right << this->last_name << "|";
    if(this->nickname.size() > 9)
        std::cout << std::setw(10) << std::right << this->nickname.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << std::right << this->nickname << std::endl;
}