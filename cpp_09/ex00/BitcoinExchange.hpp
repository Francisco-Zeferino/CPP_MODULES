/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:54:15 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 11:09:50 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <exception>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <map>

class BitcoinExchange {
private:
  float userBtcValue;
  std::ifstream btcFile;
  std::map<std::string, float> dbContainer;
public:
  BitcoinExchange();
  BitcoinExchange(std::ifstream file);
  BitcoinExchange(const BitcoinExchange &copy);
  ~BitcoinExchange();
  BitcoinExchange &operator=(const BitcoinExchange &copy);
  void fileParse();
  bool bitcoinValueValidation(std::string valueLine);
  void setFileStream(std::string fileName);
  void parseDataBase();
  bool dateValidation(std::string userBtcDate);
  void exchangeBitcoin(std::string userBtcValueLine, std::string userBtcDate);
};

void userInputParse(std::string fileName);

#endif
