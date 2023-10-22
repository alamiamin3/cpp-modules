/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:15:22 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 14:16:48 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if (N < 0)
        return (0);
    Zombie  *zombies = new Zombie[N];
    if (!zombies)
        return (0);
    int i = -1;
    while (++i < N)
        zombies[i].setName(name);
    return(zombies);
}