/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:42:02 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 16:14:32 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon w_1 = Weapon("AK-47");
    Weapon w_2 = Weapon("M4A1");
    HumanA a_1 = HumanA("John", w_1);
    HumanB b_1 = HumanB("Bob");
    a_1.attack();
    b_1.attack();
}