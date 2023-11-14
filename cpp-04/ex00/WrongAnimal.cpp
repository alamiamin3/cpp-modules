/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:15:18 by aalami            #+#    #+#             */
/*   Updated: 2023/10/27 12:16:17 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "WrongAnimal Constructor Called"<< std::endl;
    type = "WrongAnimal";
}
WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout<< "WrongAnimal Copy Constructor Called"<< std::endl;
    type = obj.type;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    type = obj.type;
    return(*this);
}
void WrongAnimal::makeSound() const
{
    std::cout<< "WrongAnimal Sound"<< std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout<< "WrongAnimal Destructor Called"<< std::endl;
}
const std::string &WrongAnimal::getType() const
{
    return(type);
}