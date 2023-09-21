/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:02:41 by aalami            #+#    #+#             */
/*   Updated: 2023/09/21 21:27:34 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
}

HumanA::HumanA(const std::string& name, Weapon& weapon)
{
    this->name = name;
    this->weapon = &weapon;
}