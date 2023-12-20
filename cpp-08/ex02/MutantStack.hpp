/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:09:56 by aalami            #+#    #+#             */
/*   Updated: 2023/12/20 22:33:37 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
#include <algorithm>
template <typename T>
class MutantStack : public std::stack<T>
{

public:
    // MutantStack();
    // ~MutantStack();
    // MutantStack(const MutantStack &obj);
    // MutantStack &operator=(const MutantStack &obj);
    typenmae std::deque::iterator iterator;
    typename std::deque::iterator begin()
    {
        return(this->c.begin());
    }
    typename std::deque::iterator end()
    {
        return(this->c.end());
    }
};
#endif


