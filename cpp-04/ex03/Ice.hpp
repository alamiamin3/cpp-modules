/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:38:54 by aalami            #+#    #+#             */
/*   Updated: 2023/10/24 10:50:54 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &obj);
        Ice(const std::string &type);
        Ice &operator=(const Ice &obj);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Ice();
};
#endif