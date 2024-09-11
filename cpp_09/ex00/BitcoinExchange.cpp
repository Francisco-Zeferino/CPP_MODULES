/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- < ffilipe-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:54:20 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 11:33:40 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) { *this = copy; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
  if (this != &copy) {
  }
  return (*this);
}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::parseDataBase(){
  std::ifstream dbFile;
  std::string dbLine;
  std::string btcDate;
  std::string btcValueLine;
  float btcValue;
  dbFile.open("data.csv", std::ifstream::in);
  while(std::getline(dbFile, dbLine)){
    size_t comma = dbLine.find_first_of(",");
    if(comma != std::string::npos){
      btcDate = dbLine.substr(0, comma);
      btcValueLine = dbLine.substr((comma + 1), dbLine.length() - 1);
      btcValue = strtof(btcValueLine.c_str(), NULL);
      dbContainer.insert(std::make_pair(btcDate, btcValue));
    }
  }
}

bool BitcoinExchange::dateValidation(std::string userBtcDate){
  size_t hyphen;
  std::string day;
  std::string month;
  std::string year;
  hyphen = userBtcDate.find_last_of("-");
  day = userBtcDate.substr((hyphen + 1), userBtcDate.length() - 1);
  month = userBtcDate.substr((userBtcDate.find_first_of("-") + 1), (userBtcDate.length() - hyphen) - 1);
  year = userBtcDate.substr(0, (userBtcDate.find_first_of("-")));
  if(atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12){
    std::cout << "Invalid month" << std::endl;
    return false;
  }
  if(atoi(day.c_str()) < 1 || atoi(day.c_str()) > 31){
    std::cout << "Invalid day" << std::endl;
    return false;
  }
  if(atoi(year.c_str()) > 2024){
    std::cout << "Invalid year" << std::endl;
    return false;
  }
  if(atoi(month.c_str()) == 2){
    if(atoi(day.c_str()) > 29){
      std::cout << "Invalid day" << std::endl;
      return false;
    }
  }
  return true;
}

bool BitcoinExchange::bitcoinValueValidation(std::string valueLine){
    char *end;
    float userBtcValueLine; 
    userBtcValueLine = strtof(valueLine.c_str(), &end);
    if(*end != '\0' || userBtcValueLine < 0 || errno == ERANGE){
      std::cout << "Invalid input: " << userBtcValueLine << std::endl;
      return false;
    }
    userBtcValue = userBtcValueLine;
    return true;
}

void BitcoinExchange::fileParse(){
  std::string userBtcDate;
  std::string fileLine;
  std::string userBtcValueLine;
  while(std::getline(btcFile, fileLine)){
    size_t ref = fileLine.find_first_of("|");
    size_t limiter = fileLine.find_last_of("|");
    if(ref != std::string::npos && ref == limiter){
      userBtcDate = fileLine.substr(0, (ref - 1));
      userBtcValueLine = fileLine.substr((ref + 1), fileLine.length() - 1);
      exchangeBitcoin(userBtcValueLine, userBtcDate);
    }
    else
      std::cout << "Invalid format. Usage : Y-M-D | VALUE" << std::endl;
  }
}

void BitcoinExchange::exchangeBitcoin(std::string userBtcValueLine, std::string userBtcDate){
  std::map<std::string, float>::iterator it;
  if(bitcoinValueValidation(userBtcValueLine) && dateValidation(userBtcDate)){
    it = dbContainer.find(userBtcDate);
    if(it != dbContainer.end()){
      std::cout << it->first << "=> " << it->second << " => " << it->second * userBtcValue << std::endl;
    }
  }
}

void userInputParse(std::string fileName) {
  BitcoinExchange btcInst;
  btcInst.parseDataBase();
  btcInst.setFileStream(fileName);
}

void BitcoinExchange::setFileStream(std::string fileName){
  btcFile.open(fileName.c_str(), std::ifstream::in);
  if(btcFile.fail())
    std::cout << "Failed opening file" << std::endl;
  else
    fileParse();
}