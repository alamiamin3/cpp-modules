/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:05:57 by aalami            #+#    #+#             */
/*   Updated: 2023/10/22 15:07:22 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &obj);
        Animal &operator=(const Animal &obj);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        virtual  const std::string &getType() const;
        
};
#endif