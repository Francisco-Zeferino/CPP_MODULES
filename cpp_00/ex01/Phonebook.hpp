/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:31:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/27 12:31:47 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> 

class Contact {
    private:
        int id;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret; 
        int is_empty();
    public :
        void getData();
        void setData();
        void setId();
        int checkEmpty(Contact contact);
};

class Phonebook {
    private:
        Contact contacts[8];       
    public:
        void add_contact(Contact contacts);
        void display_contact();
};