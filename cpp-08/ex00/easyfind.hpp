/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:31:13 by aalami            #+#    #+#             */
/*   Updated: 2023/12/17 18:13:04 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

class NumberNotFound : public std::exception
{
    const char *what() const throw()
    {
        return ("can't find this number");
    }
};
template < template <typename, typename ...> class Container , typename T, typename... Arg>
void easyfind(Container <T, Arg...> &Container, int nbr)
{
    typename Container<T>::iterator a;
     a =  std::find(Container.begin(), Container.end(), nbr);
     if (a == Container.end())
        throw NumberNotFound();
    else
        std::cout<<*a<<" found"<<std::endl;
        
}
#endif