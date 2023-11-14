/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:22:31 by aalami            #+#    #+#             */
/*   Updated: 2023/10/27 13:02:08 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<< "WrongCat Constructor Called"<< std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout<< "WrongCat Copy Constructor Called"<< std::endl;
    type = obj.type;
}
WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    type = obj.type;
    return(*this);
}
void WrongCat::makeSound() const
{
    std::cout<< "WrongCat Sound"<< std::endl;
}
WrongCat::~WrongCat()
{
    std::cout<< "WrongCat Destructor Called"<< std::endl;
}

const std::string &WrongCat::getType() const
{
    return(type);
}