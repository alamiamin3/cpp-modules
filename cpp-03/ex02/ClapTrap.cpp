/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:49:12 by aalami            #+#    #+#             */
/*   Updated: 2023/10/18 17:14:53 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
ClapTrap::ClapTrap()
{
    std::cout<<"ClapTrap Constructor called"<< std::endl;
    this->hit_points = 100;
    this->energy_points = 10;
    this->attack_damage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout<<"ClapTrap Copy Constructor called"<< std::endl;
    this->name = obj.name;
    this->hit_points = obj.hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    this->name = obj.name;
    this->hit_points = obj.hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
    return (*this);
}
ClapTrap::ClapTrap(const std::string &name)
{
    std::cout<<"ClapTrap Constructor called"<< std::endl;
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 10;
    this->attack_damage = 0;
}
ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap Destructor called"<< std::endl;
}
void    ClapTrap::attack(const std::string &target)
{
    if (hit_points != 0 && energy_points != 0)
    {
        std::cout<<"Clap Trap "<<name<<" attacks "<< target <<", causing "<< attack_damage<< " points of damage"<<std::endl;
        // energy_points --;
        if (--energy_points == 0)
            energy_points = 0;
    }
}
void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<"Clap Trap "<<name<<" attacked , causing "<< amount<< " points of damage"<<std::endl;
    hit_points -= amount;
}
void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points != 0 && energy_points != 0)
    {
        std::cout<<"Clap Trap "<<name<<" repaired by "<< amount <<" points"<<std::endl;
        if (--energy_points == 0)
            energy_points = 0;
    }
}