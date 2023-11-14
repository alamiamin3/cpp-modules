/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:59:37 by aalami            #+#    #+#             */
/*   Updated: 2023/10/18 17:24:11 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    std::cout<<"FragTrap Constructor called"<< std::endl;
}
FragTrap::FragTrap(const std::string &name)
{
    std::cout<<"FragTrap Constructor called"<< std::endl;
    this->name = name;
    energy_points = 100;
    attack_damage = 30;
}
FragTrap::FragTrap(const FragTrap &obj)
{
    std::cout<<"FragTrap Copy Constructor called"<< std::endl;
    name = obj.name;
    hit_points = obj.hit_points;
    energy_points = obj.energy_points;
    attack_damage = obj.attack_damage;
}
FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    name = obj.name;
    hit_points = obj.hit_points;
    energy_points = obj.energy_points;
    attack_damage = obj.attack_damage;
    return (*this);
}
FragTrap::~FragTrap()
{
     std::cout<<"FragTrap Destructor called"<< std::endl;
}
void FragTrap::attack(const std::string &target)
{
    if (hit_points != 0 && energy_points != 0)
    {
        std::cout<<"Frag Trap "<<name<<" attacks "<< target <<", causing "<< attack_damage<< " points of damage"<<std::endl;
        // energy_points --;
        if (--energy_points == 0)
            energy_points = 0;
    }
}
void FragTrap::highFivesGuys()
{
     std::cout<<"High fives"<< std::endl;
}