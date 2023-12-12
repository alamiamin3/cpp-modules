/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:28:04 by aalami            #+#    #+#             */
/*   Updated: 2023/12/12 18:12:31 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Y>

void iter(T *arr, int length, Y func)
{
        int i = -1;
        while (++i < length)
            func(arr[i]);
    
}
#endif