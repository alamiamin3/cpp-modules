/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:42:51 by aalami            #+#    #+#             */
/*   Updated: 2023/10/24 17:42:25 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
    // std::cout<<"Ice constructor called"<<std::endl;
}
Ice::~Ice()
{
    // std::cout<<"Ice destructor called"<<std::endl;
}

Ice::Ice(const std::string &name)
{
    type = name;
}

Ice::Ice(const Ice &obj)
{
      type = obj.type;
}

Ice &Ice::operator=(const Ice &obj)
{
      type = obj.type;
      return (*this);
}

AMateria* Ice::clone() const
{
    AMateria *ptr = new Ice("ice");
    return ptr;
}

void Ice::use(ICharacter &target)
{
    std::cout<<"* shoots an ice bolt at " << target.getName()<<" *"<<std::endl;
}