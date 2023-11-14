/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:12:34 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 14:22:37 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void    announce();
    void    setName(std::string name);
    Zombie();
    ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
#endif
