/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:13:39 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/06 13:50:06 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    _level[0] = "DEBUG";
    _level[1] = "INFO";
    _level[2] = "WARNING";
    _level[3] = "ERROR";
    _complain[0] = &Harl::debug;
    _complain[1] = &Harl::info;
    _complain[2] = &Harl::warning;
    _complain[3] = &Harl::error;
    return ;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    return ;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
    return ;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

Harl::~Harl()
{
    return ;
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (level == _level[i])
            (this->*_complain[i])();
    }
}
