/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:21:08 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 10:44:25 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::showTopBar(){
    std::cout << "|-------------------------------------------------|" << std::endl;
    std::cout << std::setw(10) << std::right << " Index |";
    std::cout << std::setw(10) << std::right << " First Name |";
    std::cout << std::setw(10) << std::right << " Last Name |";
    std::cout << std::setw(10) << std::right << " Nickname |" << std::endl;
    std::cout << "|-------------------------------------------------|" << std::endl;
}

int Contact::checkEmpty(Contact contact)
{
    if(contact.isEmpty())
        return 1;
    return 0;
}

void Contact::setId()
{
    static int idx;
    if(idx >= 8)
        this->id = 0;
    else{
        this->id = idx;
        idx++;
    }
}

bool Contact::isEmpty()
{
    if(this->first_name.empty() || this->last_name.empty() || this->nickname.empty() || this->phone_number.empty() || this->darkest_secret.empty())
        return true;
    return false;
}

bool Contact::validPhonenbr()
{
    for(int i = 0; i < (int)this->phone_number.length(); i++)
    {
        if(!isdigit(phone_number[i]))
            return false;
    }
    return true;
}

std::string Contact::protectedGetline(std::string displayString)
{
    std::string userInputString;
    std::cout << displayString;
    if(std::cin.eof())
        exit(0);
    std::getline(std::cin, userInputString);
    return userInputString;
}

void Contact::trimString(std::string &str)
{
    int i = 0;
    while(str[i]){
        if(str[i] == '\t' && (unsigned long)i <= str.length()){
            str.erase(str.begin() + i);
            if(i != 0)
                str.insert(i, " ");
        }
        i++;
    }
}

void Contact::setData()
{
    this->first_name = protectedGetline("Please insert your first name :");
    this->last_name = protectedGetline("Please insert your last name :");
    this->nickname = protectedGetline("Please insert your nickname :");
    this->phone_number = protectedGetline("Please insert your phonenumber :");
    this->darkest_secret = protectedGetline("Please insert your darkest secret :");
    trimString(this->first_name);
    trimString(this->last_name);
    trimString(this->nickname);
    trimString(this->darkest_secret);

    if(this->isEmpty() || !validPhonenbr())
    {
        std::cout << "You must fill all fields or enter a valid phone number" << std::endl;
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
    std::cout << std::setw(10) << std::right << this->id << " | ";
    if(this->first_name.size() > 9)
        std::cout << std::setw(10) << std::right << this->first_name.substr(0, 9) << "." << " | ";
    else
        std::cout << std::setw(10) << std::right << this->first_name << " | ";
    if(this->last_name.size() > 9)
        std::cout << std::setw(10) << std::right << this->last_name.substr(0, 9) << "." << " | ";
    else
        std::cout << std::setw(10) << std::right << this->last_name << " | ";
    if(this->nickname.size() > 9)
        std::cout << std::setw(10) << std::right << this->nickname.substr(0, 9) << "." << " | ";
    else
        std::cout << std::setw(10) << std::right << this->nickname << std::endl;
}
