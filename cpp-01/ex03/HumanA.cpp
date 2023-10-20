/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:02:41 by aalami            #+#    #+#             */
/*   Updated: 2023/10/20 18:03:53 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    Weapon *a = &weapon;
    if (a)
        std::cout << this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
}

HumanA::HumanA(const std::string& name, Weapon& w) : weapon(w) 
{
    this->name = name;
}