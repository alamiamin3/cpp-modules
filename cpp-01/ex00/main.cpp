/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:19:55 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 18:27:24 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *ptr = newZombie("fooo");
    if (ptr)
        ptr->announce();
    randomChump("a");
    randomChump("b");
    delete ptr;
}