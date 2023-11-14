/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:10:35 by aalami            #+#    #+#             */
/*   Updated: 2023/10/25 15:51:46 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    
    ScavTrap *a  = new ScavTrap("scav");
    FragTrap b("frag");
    a->attack("frag");
    b.takeDamage(10);
    b.attack("scav");
    b.attack("scav");
    b.attack("scav");
    a->beRepaired(20);
    b.highFivesGuys();
    delete a;
}