/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:34:15 by francisco         #+#    #+#             */
/*   Updated: 2024/05/29 14:15:52 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    ClapTrap a("a");
    ScavTrap mario("Mario");
    FragTrap frag("c");
    ScavTrap jose("jose");

    mario.guardGate();
    frag.highFivesGuys();
    jose.beRepaired(1);
    mario.beRepaired(1);
    jose = mario;
    jose.beRepaired(1);

}