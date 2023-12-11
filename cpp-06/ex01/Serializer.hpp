/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:24:50 by aalami            #+#    #+#             */
/*   Updated: 2023/12/11 16:36:30 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include "Data.hpp"
#include <iostream>



class Serializer
{
private:
    Serializer();
    ~Serializer();
    Serializer &operator=(const Serializer &obj);
    Serializer(const Serializer &obj);
public:
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};
#endif