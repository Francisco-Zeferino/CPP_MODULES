/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileHandling.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:42:56 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/05 17:37:38 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

class FileHandler
{
    private :
        std::string _fileName;
        std::string _s1;
        std::string _s2;
        std::string _newFileName;
        std::ifstream _file;
        std::ofstream _newFile;
    public :
        FileHandler(std::string fileName, std::string s1, std::string s2);
        ~FileHandler();
        void replace();
        void createNewFile();
};