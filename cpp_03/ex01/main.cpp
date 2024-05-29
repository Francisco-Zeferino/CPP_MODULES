/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:34:15 by francisco         #+#    #+#             */
/*   Updated: 2024/05/29 13:29:01 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ClapTrap clapA("a");
    ScavTrap scav("AD");
    ClapTrap clapB("b");
    ScavTrap scavB;

    scavB = scav;
    clapA = clapB;
    clapA.attack("clapB");
    scavB.attack("scav");
}