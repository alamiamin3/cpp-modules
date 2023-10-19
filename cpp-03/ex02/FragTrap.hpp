/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:50:44 by aalami            #+#    #+#             */
/*   Updated: 2023/10/18 17:22:52 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap();
    FragTrap(const std::string &name);
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(const FragTrap &obj);
    ~FragTrap();
    void highFivesGuys(void);
    void attack(const std::string &target);
};
#endif