/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:15:22 by aalami            #+#    #+#             */
/*   Updated: 2023/09/19 22:53:10 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie  *zombies = new Zombie[N];
    int i = -1;
    while (++i < N)
        zombies[i] = Zombie(name);
    return(zombies);
}