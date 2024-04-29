/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:31:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 10:45:13 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Phonebook {
    private:
        Contact contacts[8];
        int getarrSize(Contact contacts[]);    
        bool validId(std::string s_id);
    public:
        void addContact(Contact contacts);
        void displayAll();
        void displayContact();
};
