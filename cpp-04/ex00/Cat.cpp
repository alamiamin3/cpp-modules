/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:17:55 by aalami            #+#    #+#             */
/*   Updated: 2023/10/19 15:25:53 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<< "Cat Constructor Called"<< std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &obj)
{
    std::cout<< "Cat Copy Constructor Called"<< std::endl;
    type = obj.type;
}
Cat &Cat::operator=(const Cat &obj)
{
    type = obj.type;
    return(*this);
}
void Cat::makeSound() const
{
    std::cout<< "Cat Sound"<< std::endl;
}
Cat::~Cat()
{
    std::cout<< "Cat Destructor Called"<< std::endl;
}

const std::string &Cat::getType() const
{
    return(type);
}