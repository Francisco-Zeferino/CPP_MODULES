/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:00:57 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/06 14:15:37 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Harl
{
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void (Harl::*_complain[4])(void);
        std::string _level[4];
    public :
        Harl();
        ~Harl();
        void complain(std::string level);  
        void outputMessage(int levelIdentifier);    
};