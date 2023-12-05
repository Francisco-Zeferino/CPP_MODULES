/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileHandling.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:42:30 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/05 18:00:04 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileHandling.hpp"

FileHandler::FileHandler(std::string fileName, std::string s1, std::string s2)
{
    this->_fileName = fileName;
    this->_newFileName = fileName.append(".replace"); 
    this->_s1 = s1;
    this->_s2 = s2;
}

FileHandler::~FileHandler()
{
    this->_file.close();
    this->_newFile.close();
}

void FileHandler::createNewFile()
{
    std::string line;
    this->_file.open(this->_fileName.c_str());
    this->_newFile.open(this->_newFileName.c_str());
    if(!this->_file.is_open() || !this->_newFile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return ;
    }
}

void FileHandler::replace()
{
    std::string rLine;
    while(!this->_file.eof())
    {
        std::getline(this->_file, rLine);
        if(rLine.find(this->_s1) != std::string::npos)
        {
            rLine.insert(rLine.find(this->_s1), this->_s2);
            rLine.erase(rLine.find(this->_s1), rLine.length());
        }
        this->_newFile << rLine << std::endl;
    }
}
