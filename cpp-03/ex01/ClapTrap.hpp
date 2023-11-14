/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:40:29 by aalami            #+#    #+#             */
/*   Updated: 2023/10/25 15:05:53 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int attack_damage;
public:
    ClapTrap(const std::string &name);
    ClapTrap();
    ClapTrap(const ClapTrap &obj);
    ClapTrap &operator=(const ClapTrap &obj);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif