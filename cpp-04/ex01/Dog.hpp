/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:48:20 by aalami            #+#    #+#             */
/*   Updated: 2023/10/27 15:19:22 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &obj);
        Dog &operator=(const Dog &obj);
        ~Dog();
        void makeSound() const;
        const std::string &getType() const;
        Brain* getbrain()
        {
            return (brain);
        }
        
};
#endif