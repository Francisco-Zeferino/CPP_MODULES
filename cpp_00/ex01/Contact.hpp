/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:43:30 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 10:45:27 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact {
    private:
        int id;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        std::string protectedGetline(std::string displayString);
        bool validPhonenbr();
        void trimData();
        int is_empty();
    public :
        void getPhonebookData();
        void getContactData();
        void setData();
        void setId();
        int checkEmpty(Contact contact);
};