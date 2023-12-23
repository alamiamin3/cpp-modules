/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:09:56 by aalami            #+#    #+#             */
/*   Updated: 2023/12/21 23:43:36 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
#include <algorithm>
template <typename T, typename Container = std::stack<T> >
class MutantStack : public std::stack<T>
{
public:
    typedef typename  MutantStack::container_type::iterator iterator;
    MutantStack() : Container(){}
    ~MutantStack(){}
    MutantStack(const MutantStack &obj) : Container(obj){}
    MutantStack &operator=(const MutantStack &obj)
    {
        if (this != &obj)
            this->Container::operator=(obj);
        return *this;
    }
    iterator begin()
    {
        return(this->c.begin());
    }
    iterator end()
    {
        return(this->c.end());
    }
};
#endif


