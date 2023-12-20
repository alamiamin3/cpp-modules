/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:37:33 by aalami            #+#    #+#             */
/*   Updated: 2023/12/19 23:48:40 by aalami           ###   ########.fr       */
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
    unsigned int len;
public:
    Array()
    {
        array = NULL;
        len = 0;
    }
    Array(unsigned int n)
    {
        len = n;
        array = new T[len];
    }
    Array(const Array &obj) : array(NULL), len(0)
    {
        *this = obj;
    }
    Array &operator=(const Array &obj)
    {
        if (this == &obj)
            return (*this);
        if (array)
        {
            std::cout<<len<<std::endl;
            delete [] array;
        }
        len = obj.len;
        array = new T[len];
        for (unsigned int i = 0; i < len; i++)
            array[i] = obj.array[i];
        return (*this);
    }
    T &operator[](unsigned int index)
    {
        printf("666\n");
        if (index >= len)
            throw std::out_of_range("Index out of range");
        return(array[index]);
    }
    unsigned int size() const
    {
        return(len);
    }
    ~Array(){
        delete [] array;
    }
};
#endif
