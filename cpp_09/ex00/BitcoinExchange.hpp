/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:54:15 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/06 15:32:48 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>

class BitcoinExchange{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        ~BitcoinExchange();
        BitcoinExchange &operator=(const BitcoinExchange &copy);
};

#endif