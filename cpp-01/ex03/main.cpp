/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:52:23 by aalami            #+#    #+#             */
/*   Updated: 2023/10/23 16:15:07 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // {
        Weapon club = Weapon("crude spiked club");
    //     HumanA bob("Bob", club);
    //     bob.attack();
    //     club.setType("some other type of club");
    //     bob.attack();
    // }

    // {
    //     Weapon club = Weapon("crude spiked club");
    //     HumanB jim("Jim");
    //     jim.setWeapon(club);
    //     jim.attack();
    //     club.setType("some other type of club");
    //     jim.attack();
    // }
    
    // Weapon *club2 = &club1;
    // HumanB ss("ss");
    // jim.setWeapon(*club2);
    // jim.attack();
    // club2->setType("yy");
    // jim.attack();
    
    Weapon *club3 = NULL;
    HumanA ff("ff", *club3);
    ff.attack();
    club3->setType("fizz");
    ff.attack();

return 0;
}