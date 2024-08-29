/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:04:53 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/08/29 16:37:57 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
    int a = 2;
    int b = 3;
    int eq = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << " eq = " << eq << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << "equal( a, eq ) = " << ::max( a, eq ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::string e = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << " e = " << e << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << "equal( c, e ) = " << ::max( c, e ) << std::endl;
    return 0;
}