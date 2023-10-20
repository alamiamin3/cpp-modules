/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:59:35 by aalami            #+#    #+#             */
/*   Updated: 2023/10/20 14:10:31 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanA
{
private:
    Weapon &weapon;
    std::string name;
public:
    void    attack();
    HumanA(const std::string &name, Weapon& w);
    // ~HumanA();
};


#endif