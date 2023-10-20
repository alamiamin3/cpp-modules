/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:14:33 by aalami            #+#    #+#             */
/*   Updated: 2023/10/20 19:20:25 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon& weapon)
{
        this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (this->weapon)
     std::cout << this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;;
}

HumanB::HumanB(const std::string& name)
{
    this->name = name;
    this->weapon = NULL;
}
