/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:27:24 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 21:44:45 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{

}
AMateria::AMateria()
{
    std::cout<<"AMateria Constructor Called"<<std::endl;
}
AMateria::AMateria(const AMateria& obj)
{
    type = obj.type;
}
AMateria &AMateria::operator=(const AMateria& obj)
{
    type = obj.type;
    return(*this);
}
AMateria::~AMateria()
{
    std::cout<<"AMateria Destructor Called"<<std::endl;
}
std::string const &AMateria::getType() const
{
    return(type);
}