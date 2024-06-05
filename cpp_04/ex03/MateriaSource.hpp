/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:57:27 by ffilipe-          #+#    #+#             */
/*   Updated: 2024/06/05 14:29:17 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    private :
        AMateria *materia[4];
    public :
        MateriaSource();
        MateriaSource(MateriaSource &copy);
        ~MateriaSource();
        MateriaSource &operator=(MateriaSource const &copy);
        void learnMateria(AMateria *materia);
        AMateria *createMateria(std::string const &type);
};

#endif