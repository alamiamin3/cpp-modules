/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:14:18 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 14:23:34 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout<<"this is my name : " << this->name<<std::endl;
}
Zombie::Zombie()
{
    std::cout<<"Zombie Constructor called" << std::endl;
}

void Zombie::announce()
{
    std::cout<<"my name is "<<this->name<<std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}