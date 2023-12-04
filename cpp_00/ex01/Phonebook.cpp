/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:55:49 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 10:51:55 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::add_contact(Contact contacts)
{
    static int i = 0;
    if(i == 8)
        i = 0;
    this->contacts[i] = contacts;
    i++;
}

int  Phonebook::get_arrSize(Contact contacts[])
{
    int i = 0;
    while(i < 8)
    {
        if(contacts[i].checkEmpty(contacts[i]))
            return(i);
        i++;
    }
    return(i);
}

void Phonebook::display_all()
{
    int arrSize = this->get_arrSize(this->contacts);
    for(int i = 0; i < arrSize; i++)
        this->contacts[i].getPhonebookData();
    this->display_contact();
}

void Phonebook::display_contact()
{
    std::string s_id;
    int id;
    std::cout << "Put the id: ";
    std::getline(std::cin, s_id);
    id = std::atoi(s_id.c_str());
    if(id < 0 || id > 7)
        std::cout << "Invalid id" << std::endl;
    else if(!this->contacts[id].checkEmpty(this->contacts[id]))
        this->contacts[id].getContactData();
    else
        std::cout << "Given ID is not registered" << std::endl;
}