/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:55:49 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/27 12:33:24 by ffilipe-         ###   ########.fr       */
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

void Phonebook::display_contact()
{
    int id;
    std::cout << "Put the id: ";
    std::cin >> id;
    if(id < 0 || id > 7)
        std::cout << "Invalid id" << std::endl;
    else if(!this->contacts[id].checkEmpty(this->contacts[id]))
        this->contacts[id].getData();
}