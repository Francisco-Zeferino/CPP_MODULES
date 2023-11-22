/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:13:41 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/11/21 16:31:21 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
    char c;
    int i;
    int j;

    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                c = std::toupper(argv[i][j]);
                std::cout << c;
                j++;
            }
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}