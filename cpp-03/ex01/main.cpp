/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:16:08 by aalami            #+#    #+#             */
/*   Updated: 2023/10/23 21:14:07 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
// #include "ClapTrap.hpp"

int main()
{
    ScavTrap obj("bob");
    // ScavTrap b(obj);
    // ScavTrap a("jim");
    // b = a;
    obj.attack("Jim");
    obj.takeDamage(100);
    obj.attack("Jim");
    obj.beRepaired(20);
    obj.guardGate();
    obj.attack("Jim");
    obj.takeDamage(100);
    obj.attack("Jim");
    obj.beRepaired(20);
    obj.guardGate();
}