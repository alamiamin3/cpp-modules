/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:47:11 by aalami            #+#    #+#             */
/*   Updated: 2023/10/21 17:07:12 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "Animal Constructor Called"<< std::endl;
    type = "Animal";
}
Animal::Animal(const Animal &obj)
{
    std::cout<< "Animal Copy Constructor Called"<< std::endl;
    type = obj.type;
}
Animal &Animal::operator=(const Animal &obj)
{
    std::cout<< "Animal Copy Assignement operator Called"<< std::endl;
    type = obj.type;
    return(*this);
}
void Animal::makeSound() const
{
    std::cout<< "Animal Sound"<< std::endl;
}
Animal::~Animal()
{
    std::cout<< "Animal Destructor Called"<< std::endl;
}
const std::string &Animal::getType() const
{
    return(type);
}