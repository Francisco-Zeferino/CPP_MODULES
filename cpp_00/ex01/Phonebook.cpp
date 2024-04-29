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
#include <cctype>

void Phonebook::addContact(Contact contacts)
{
    static int i = 0;
    if(i == 8)
        i = 0;
    this->contacts[i] = contacts;
    i++;
}

int  Phonebook::getarrSize(Contact contacts[])
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

bool Phonebook::validId(std::string s_id){
  
  for(int i = 0; i < (int)s_id.length(); i++){
    if(!isdigit(s_id[i]))
       return false;
  }
  return true;
}

void Phonebook::displayAll()
{
    int arrSize = this->getarrSize(this->contacts);
    for(int i = 0; i < arrSize; i++)
        this->contacts[i].getPhonebookData();
    this->displayContact();
}

void Phonebook::displayContact()
{
    std::string s_id;
    int id;
    std::cout << "Put the id: ";
    std::getline(std::cin, s_id);
    if(!validId(s_id)){
      std::cout << "Given ID is not valid!" << std::endl;
      return;
    }
    id = std::atoi(s_id.c_str());
    if(id < 0 || id > 7)
        std::cout << "Invalid id" << std::endl;
    else if(!this->contacts[id].checkEmpty(this->contacts[id]))
        this->contacts[id].getContactData();
    else
        std::cout << "Given ID is not registered" << std::endl;
}
