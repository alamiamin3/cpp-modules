/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:14:18 by aalami            #+#    #+#             */
/*   Updated: 2023/09/19 22:49:04 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie::Zombie() : name("")
// {
    
// }
Zombie::Zombie(std::string& name) : name(name)
{
    
}
Zombie::~Zombie()
{
    std::cout<<"this is my name : " << this->name<<std::endl;
}