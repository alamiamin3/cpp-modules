/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:31:13 by aalami            #+#    #+#             */
/*   Updated: 2023/12/20 17:31:48 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <stack>
#include <deque>

class NumberNotFound : public std::exception
{
    const char *what() const throw()
    {
        return ("can't find this number");
    }
};
template < typename T>
void easyfind(T &container, int nbr)
{
    typename T::iterator a;
     a =  std::find(container.begin(), container.end(), nbr);
     if (a == container.end())
        throw NumberNotFound();
    else
        std::cout<<*a<<" found"<<std::endl;
        
}
#endif