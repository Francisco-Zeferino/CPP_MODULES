/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:34:32 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 15:15:11 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string brainString = "HI THIS IS BRAIN";
    std::string *stringPTR = &brainString;
    std::string &stringREF = brainString;

    std::cout << &brainString << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << brainString << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

}