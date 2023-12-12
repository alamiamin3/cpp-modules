/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:42:51 by aalami            #+#    #+#             */
/*   Updated: 2023/12/12 15:03:07 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
template <typename T>
T min(T a, T b)
{
    if (a < b)
        return(a);
    return(b);
}
template <typename T>
T max(T a, T b)
{
    if (a > b)
        return(a);
    return(b);
}
#endif
