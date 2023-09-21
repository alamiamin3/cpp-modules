/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:55:51 by aalami            #+#    #+#             */
/*   Updated: 2023/09/21 18:55:03 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&    Weapon::getType()
{
    return(this->type);
}

void    Weapon::setType(const std::string& type)
{
    this->type = type;
}

Weapon::Weapon(const std::string& type)
{
    Weapon::setType(type);
}
Weapon::Weapon()
{
    
}