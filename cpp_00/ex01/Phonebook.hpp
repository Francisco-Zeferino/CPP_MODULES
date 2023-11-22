/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:31:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/22 17:06:09 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret; 
};

class Phonebook {
    public:
        Contact contacts[8];
        int id;
};

void add_contact(Phonebook *phonebook);
void display_contact(Phonebook *phonebook);