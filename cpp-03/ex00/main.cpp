/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:32:12 by aalami            #+#    #+#             */
/*   Updated: 2023/10/25 14:18:02 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c;
    ClapTrap d("foo");
    ClapTrap a("bob");
    ClapTrap b(a);
    c = d;
    c.attack("bob");
    b.attack("jim");
    b.takeDamage(3);
    b.beRepaired(3);
}