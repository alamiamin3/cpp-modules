/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 00:00:07 by aalami            #+#    #+#             */
/*   Updated: 2023/10/23 00:07:23 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
#define MATERIASOURCE
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
    private:
        
    public:
        MateriaSource();
        ~MateriaSource(){}
        MateriaSource(const MateriaSource &obj);
        MateriaSource &operator=(const MateriaSource &obj);
        void learnMateria(AMateria *);
        AMateria* createMateria(std::string const& type);
};
#endif
