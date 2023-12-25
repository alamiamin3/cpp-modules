/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:35:06 by aalami            #+#    #+#             */
/*   Updated: 2023/12/25 01:10:16 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void square(T &a)
{
    a = a * a;   
}
int *fill_array(int len)
{
    int *arr = new int[len];
   int i = -1;
    while (++i < len)
        arr[i] = i;
    return arr;
}
int main()
{
    try
    {
        int lenght = 5;
        int *arr = fill_array(lenght);
        int i = -1;
        std::cout<<"before calling iter ==>    ";
        while (++i < lenght)
            std::cout<<arr[i]<<" ";
        std::cout<<std::endl<<"After calling iter ==>    ";
        iter(arr, lenght, square<int>);
        i = -1;
        while (++i < lenght)
            std::cout<<arr[i]<<" ";
        std::cout<<std::endl;
        delete [] arr;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}
