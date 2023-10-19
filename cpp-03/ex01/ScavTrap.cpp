/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:06:54 by aalami            #+#    #+#             */
/*   Updated: 2023/10/18 15:26:21 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout<<"ScavTrap Constructor called "<< std::endl;
    this->name = name;
    this->attack_damage = 20;
    this->energy_points = 50;
}
ScavTrap::ScavTrap()
{
    std::cout<<"ScavTrap Constructor called "<< std::endl;
    this->attack_damage = 20;
    this->energy_points = 50;
}
ScavTrap::ScavTrap(const ScavTrap &obj)
{
    std::cout<<"ScavTrap Copy Constructor called "<< std::endl;
    name = obj.name; 
    hit_points = obj.hit_points; 
    energy_points = obj.energy_points; 
    attack_damage = obj.attack_damage; 
}
ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    name = obj.name; 
    hit_points = obj.hit_points; 
    energy_points = obj.energy_points; 
    attack_damage = obj.attack_damage; 
    return (*this);
}
ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap Destructor called"<< std::endl;
}
void ScavTrap::attack(const std::string &target)
{
    if (hit_points != 0 && energy_points != 0)
    {
        std::cout<<"Scav Trap "<<name<<" attacks "<< target <<", causing "<< attack_damage<< " points of damage"<<std::endl;
        // energy_points --;
        if (--energy_points == 0)
            energy_points = 0;
    }
}
void ScavTrap::guardGate()
{
    std::cout<<"Scav Trap "<< name << " is now in Gate keeper mode" << std::endl;
}