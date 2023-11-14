/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:28:00 by aalami            #+#    #+#             */
/*   Updated: 2023/10/24 09:20:33 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
    // std::cout<<"Cure constructor called"<<std::endl;
}
Cure::~Cure()
{
    // std::cout<<"Cure destructor called"<<std::endl;
}

Cure::Cure(const std::string &name)
{
    type = name;   
}

Cure::Cure(const Cure &obj)
{
      type = obj.type;
}

Cure &Cure::operator=(const Cure &obj)
{
      type = obj.type;
      return (*this);
}

AMateria* Cure::clone() const
{
    AMateria *ptr = new Cure("cure");
    return ptr;
}

void Cure::use(ICharacter &target)
{
    std::cout<<"* heals " << target.getName()<<"'s wounds *"<<std::endl;
}