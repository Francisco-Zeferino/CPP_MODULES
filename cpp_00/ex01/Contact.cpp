/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:21:08 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/24 15:22:26 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Contact::setData()
{
    std::cout << "Please enter the contact's first name: ";
    std::cin >> this->first_name;
    std::cout << "Please enter the contact's last name: ";
    std::cin >> this->last_name;
    std::cout << "Please enter the contact's nickname: ";
    std::cin >> this->nickname;
    std::cout << "Please enter the contact's phone number: ";
    std::cin >> this->phone_number;
    std::cout << "Please enter the contact's darkest secret: ";
    std::cin >> this->darkest_secret;
}

void Contact::getData()
{
    std::cout << std::right << std::setw(10) << "First name: " << this->first_name << " | ";
    std::cout << std::right << std::setw(10) << "Last name: " << this->last_name << " | ";
    std::cout << std::right << std::setw(10) << "Nickname: " << this->nickname << " | ";
    std::cout << std::right << std::setw(10) << "Phone number: " << this->phone_number << " | ";
    std::cout << std::right << std::setw(10) << "Darkest secret: " << this->darkest_secret << std::endl;
}

