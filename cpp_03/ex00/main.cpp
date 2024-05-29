/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:34:15 by francisco         #+#    #+#             */
/*   Updated: 2024/05/29 14:32:54 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap a("Frank");
    ClapTrap b("Manu");

    for(int i = 0; i < 9; i++)
        a.attack("Manu");
    b.takeDamage(11);
    // for(int i = 0; i < 9; i++)
    //     a.attack("Manu");
    // for(int i = 0; i < 15; i++)
    //     b.attack("Manu");  
    //b.attack("Frank");
    // a.beRepaired(1);
}