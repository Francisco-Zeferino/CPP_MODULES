/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisco <francisco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:42:02 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/03/06 20:34:28 by francisco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon arma = Weapon("AK_44");
    HumanA bacano(arma, "Zefas");
    HumanB zezoca("Zezoca");
    bacano.attack();
    arma.setType("AK_55");
    bacano.attack();
    zezoca.setWeapon(arma);
    zezoca.attack();
}