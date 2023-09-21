/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:52:47 by aalami            #+#    #+#             */
/*   Updated: 2023/09/21 18:55:55 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
class Weapon
{
private:
   std::string type;
public:
    const std::string&    getType();
    void    setType(const std::string& type);
    Weapon();
    Weapon(const std::string& type);
    // ~Weapon();
};


#endif