/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:52:59 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 23:56:11 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    
}
Character::Character(const std::string &name) : name(name)
{
    for(int i = 0; i <  4; i++)
        slot[i] = NULL;
}
Character::~Character()
{
    
}
Character::Character(const Character &obj)
{
    for(int i = 0; i < 4; i++)
    {
        if (slot[i] != NULL)
            delete slot[i];
    }
    for(int i = 0; i < 4; i++)
        slot[i] = obj.slot[i]->clone();
    name = obj.name;
}
Character &Character::operator=(const Character &obj)
{
    for(int i = 0; i < 4; i++)
    {
        if (slot[i] != NULL)
            delete slot[i];
    }
    for(int i = 0; i < 4; i++)
        slot[i] = obj.slot[i]->clone();
    name = obj.name;
    return (*this);
}
void Character::equip(AMateria* m)
{
    if (m)
    {
        int i = -1;
        while (++i < 4)
        {
            if (slot[i])
                continue;
            slot[i] = m;
            break;
        }
    }
}
void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && slot[idx])
            slot[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
    if (slot[idx])
        slot[idx]->use(target);
}
