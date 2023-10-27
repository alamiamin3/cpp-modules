/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:16:08 by aalami            #+#    #+#             */
/*   Updated: 2023/10/27 18:44:30 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
// #include "ClapTrap.hpp"

int main()
{
    // ClapTrap *a = new ScavTrap("bob");
    ScavTrap *ptr = new ScavTrap("foo");
    ScavTrap obj("bob");
    ScavTrap b(obj);
    ScavTrap a("jim");

    ptr->attack("bob");
    delete ptr;
    b = a;
    a.attack("Jim");
    a.takeDamage(100);
    a.attack("Jim");
    a.beRepaired(20);
    a.attack("Jim");
    a.takeDamage(100);
    a.attack("Jim");
    a.beRepaired(20);
    a.guardGate();
}