/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:52:59 by aalami            #+#    #+#             */
/*   Updated: 2023/10/24 17:31:55 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}
Character::Character(const std::string &name) : name(name)
{
    // save = new AMateria*;
    // save_index = 0;
    for(int i = 0; i <  4; i++)
        slot[i] = NULL;
}
Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if (slot[i] != NULL)
            delete slot[i];
    }
    
        // for (int i = 0; i < save_index; i++)
        //     delete save[i];
        // delete [] save;
        
}
Character::Character(const Character &obj)
{
    *this = obj;
}
Character &Character::operator=(const Character &obj)
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
    static int i;
    // AMateria *tmp[i+1];
    if (idx >= 0 && idx < 4 && slot[idx])
    {
        // if (i == 0)
        //     *save = slot[idx];
        // else
        // {
        //     for(int j = 0; j < i; j++)
        //         tmp[j] = save[j];
        //     for(int j = 0; j < i; j++)
        //         delete save[j];
        //     save = new AMateria*[i + 1];
        //     delete [] save;
        //     for(int j = 0; j < i; j++)
        //         save[j] = tmp[j];
        //     save[i + 1] = slot[idx];
        //     save_index = i + 1;
        //     // printf("dd\n");
        // }
        slot[idx] = NULL;
        i++;
    }
}
void Character::use(int idx, ICharacter &target)
{

    if (idx >= 0 && idx < 4 && slot[idx])
        slot[idx]->use(target);
}
std::string const &Character::getName() const
{
    return (name);
}

