/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:07:32 by francisco         #+#    #+#             */
/*   Updated: 2024/03/13 15:15:20 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    _complainLevel[0] = "DEBUG";
    _complainLevel[1] = "INFO";
    _complainLevel[2] = "WARNING";
    _complainLevel[3] = "ERROR";
    harlPtr[0] = &Harl::debug;
    harlPtr[1] = &Harl::info;
    harlPtr[2] = &Harl::warning;
    harlPtr[3] = &Harl::error;
}

Harl::~Harl(){
}

void Harl::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    for(int i = 0; i < 4; i++)
    {
        if(level == _complainLevel[i])
            (this->*harlPtr[i])();
    }
}
