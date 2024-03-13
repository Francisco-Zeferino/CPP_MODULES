/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:05:35 by francisco         #+#    #+#             */
/*   Updated: 2024/03/13 15:13:30 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Harl {
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void (Harl::*harlPtr[4])();
        std::string _complainLevel[4];
    public :
        Harl();
        ~Harl();
        void complain( std::string level);
};