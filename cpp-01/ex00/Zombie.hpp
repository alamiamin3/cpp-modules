/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:11:50 by aalami            #+#    #+#             */
/*   Updated: 2023/09/19 21:46:56 by aalami           ###   ########.fr       */
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
    void    announce(void);
    Zombie(std::string& name);
    ~Zombie();
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif