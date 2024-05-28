/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:34:15 by francisco         #+#    #+#             */
/*   Updated: 2024/05/28 14:08:26 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ClapTrap a("a");
    ScavTrap AD("AD");
    ClapTrap b("b");

    a.attack("b");
    b.takeDamage(10);
    b.attack("a");
    AD.attack("a");
    AD.attack("B");
    b.attack("A");
}