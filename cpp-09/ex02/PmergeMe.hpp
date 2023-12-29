/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:32:15 by aalami            #+#    #+#             */
/*   Updated: 2023/12/29 18:46:31 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

void PmergeMe(std::vector<int> &unsortedList, std::deque<int> &unsortedListDeque);
void findPairs(std::vector<int> &unsortedList, std::vector<std::pair<int, int> > &pairs, size_t listSize);

template <typename Container>
bool isSorted(Container &mainChain, Container &unsorted)
{
    if (mainChain.size() != unsorted.size())
        return false;
    
    for(size_t i = 0; i < mainChain.size(); i++)
    {
        if (mainChain[i + 1] != *mainChain.end())
            break;
        else if (mainChain[i] > mainChain[i+1])
        {
            std::cout<<mainChain[i]<<" "<<mainChain[i+1]<<std::endl;
            return false;
        }
    }
    return true;
}
#endif