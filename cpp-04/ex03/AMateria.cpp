/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:27:24 by aalami            #+#    #+#             */
/*   Updated: 2023/10/24 15:16:05 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{

}
AMateria::AMateria()
{
    // std::cout<<"AMateria Constructor Called"<<std::endl;
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
    // std::cout<<"AMateria Destructor Called"<<std::endl;
}
std::string const &AMateria::getType() const
{
    return(type);
}
void AMateria::use(ICharacter &target)
{
    std::cout<<"* heals " << target.getName()<<"'s wounds *"<<std::endl;
}