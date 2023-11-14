/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 00:05:01 by aalami            #+#    #+#             */
/*   Updated: 2023/10/24 13:06:36 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    index = 0;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (slot[i] != NULL)
            delete slot[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    if (this == &obj)
        return (*this);
    for(int i = 0; i < 4; i++)
    {
        if (slot[i] != NULL)
            delete slot[i];
    }
    for(int i = 0; i < 4; i++)
    {
        if (obj.slot[i])
            slot[i] = obj.slot[i]->clone();
        else
            slot[i] = NULL;
    }
    return(*this);
}
void MateriaSource::learnMateria(AMateria *ptr)
{
    if (index < 4 && ptr)
    {
        // if (ptr->getType() == "cure")
            slot[index] = ptr->clone();
        index++;
    }
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    if (type == "cure" || type == "ice")
    {
        int i = 0;
        while (i < 4)
        {
            if (slot[i] && slot[i]->getType() == type)
                return (slot[i]->clone());
            i++;
        }
    }
    return (0);
}