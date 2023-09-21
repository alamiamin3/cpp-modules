/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:13:41 by aalami            #+#    #+#             */
/*   Updated: 2023/09/21 21:14:12 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanB
{
private:
    Weapon *weapon;
    std::string name;
public:
    void    attack();
    void    setWeapon(Weapon& weapon);
    HumanB(const std::string &name);
};


#endif