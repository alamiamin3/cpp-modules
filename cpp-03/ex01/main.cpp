/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:16:08 by aalami            #+#    #+#             */
/*   Updated: 2023/10/18 15:33:53 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
// #include "ClapTrap.hpp"

int main()
{
    ScavTrap obj("bob");
    ScavTrap b(obj);
    ScavTrap a("zbi");
    b = a;
    obj.attack("w9");
    obj.takeDamage(100);
    obj.attack("w9");
    obj.beRepaired(20);
    obj.guardGate();
    obj.attack("w9");
    obj.takeDamage(100);
    obj.attack("w9");
    obj.beRepaired(20);
    obj.guardGate();
}