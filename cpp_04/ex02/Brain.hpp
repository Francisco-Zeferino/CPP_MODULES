/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:03:25 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/04 15:00:03 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(Brain &copy);
        ~Brain();
        Brain &operator=(Brain const &copy);
        std::string getIdeas(int idx);
        void setIdeas(int idx, std::string idea);
};

#endif