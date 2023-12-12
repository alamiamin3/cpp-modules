/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:37:33 by aalami            #+#    #+#             */
/*   Updated: 2023/12/12 18:43:19 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
private:
    T *array;
public:
    Array()
    {
        array = new T();
    }
    Array(unsigned int n)
    {
        array = new T[n];
    }
    Array(const Array &obj)
    {
        
    }
    ~Array();
};

