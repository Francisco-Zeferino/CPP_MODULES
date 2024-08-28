/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:42:02 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/23 18:12:45 by ffilipe-         ###   ########.fr       */
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
    arma.setType("AK66");
    bacano.attack();
    zezoca.setWeapon(arma);
    zezoca.attack();
}