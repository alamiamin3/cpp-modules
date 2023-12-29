/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 10:33:16 by aalami            #+#    #+#             */
/*   Updated: 2023/12/29 18:53:54 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void findPairs(std::vector<int> &unsortedList,
    std::vector<std::pair<int, int> > &pairs, size_t listSize)
{
    for(size_t i = 0; i < listSize; i+=2)
    {
        if (unsortedList[i] > unsortedList[i + 1])
            pairs.push_back(std::make_pair(unsortedList[i + 1], unsortedList[i]));
        else
            pairs.push_back(std::make_pair(unsortedList[i], unsortedList[i + 1]));
            
    }
}
void findPairs(std::deque<int> &unsortedList,
    std::deque<std::pair<int, int> > &pairs, size_t listSize)
{
    for(size_t i = 0; i < listSize; i+=2)
    {
        if (unsortedList[i] > unsortedList[i + 1])
            pairs.push_back(std::make_pair(unsortedList[i + 1], unsortedList[i]));
        else
            pairs.push_back(std::make_pair(unsortedList[i], unsortedList[i + 1]));
            
    }
}
std::vector<std::pair<int, int> > merge(std::vector<std::pair<int, int> > &left, std::vector<std::pair<int, int> > &right)
{
    std::vector<std::pair<int, int> > ret;
    size_t i = 0;
    size_t j = 0;
    while(i < left.size() && j < right.size())
    {
        if (left[i].second < right[j].second)
        {
            ret.push_back(left[i]);
            i++;
        }
        else
        {
            ret.push_back(right[j]);
            j++;
        }
    }
    while (i < left.size())
    {
        ret.push_back(left[i]);
        i++;
    }
    while (j < right.size())
    {
        ret.push_back(right[j]);
        j++;
    }
    return ret;
}
std::deque<std::pair<int, int> > merge(std::deque<std::pair<int, int> > &left, std::deque<std::pair<int, int> > &right)
{
    std::deque<std::pair<int, int> > ret;
    size_t i = 0;
    size_t j = 0;
    while(i < left.size() && j < right.size())
    {
        if (left[i].second < right[j].second)
        {
            ret.push_back(left[i]);
            i++;
        }
        else
        {
            ret.push_back(right[j]);
            j++;
        }
    }
    while (i < left.size())
    {
        ret.push_back(left[i]);
        i++;
    }
    while (j < right.size())
    {
        ret.push_back(right[j]);
        j++;
    }
    return ret;
}
std::vector<std::pair<int, int> > mergeSortPairs(std::vector<std::pair<int, int> > &pairs)
{
    if (pairs.size() == 1)
        return pairs;
    size_t middle = pairs.size() / 2;
    std::vector<std::pair<int, int> > leftVec(pairs.begin(), pairs.begin() + middle);
    std::vector<std::pair<int, int> > rightVec(pairs.begin() + middle, pairs.end());
    leftVec = mergeSortPairs(leftVec);
    rightVec = mergeSortPairs(rightVec);
    
    return merge(leftVec, rightVec);
}
std::deque<std::pair<int, int> > mergeSortPairs(std::deque<std::pair<int, int> > &pairs)
{
    if (pairs.size() == 1)
        return pairs;
    size_t middle = pairs.size() / 2;
    std::deque<std::pair<int, int> > leftVec(pairs.begin(), pairs.begin() + middle);
    std::deque<std::pair<int, int> > rightVec(pairs.begin() + middle, pairs.end());
    leftVec = mergeSortPairs(leftVec);
    rightVec = mergeSortPairs(rightVec);
    
    return merge(leftVec, rightVec);
}

void mainChainConstructor(std::vector<std::pair<int, int> > &sortedPairs, std::vector<int> &mainChain, std::vector<int> &pendingChain)
{
    for(size_t i = 0; i < sortedPairs.size(); i ++)
    {
        mainChain.push_back(sortedPairs[i].second);
        pendingChain.push_back(sortedPairs[i].first);
    }
}
void mainChainConstructor(std::deque<std::pair<int, int> > &sortedPairs, std::deque<int> &mainChain, std::deque<int> &pendingChain)
{
    for(size_t i = 0; i < sortedPairs.size(); i ++)
    {
        mainChain.push_back(sortedPairs[i].second);
        pendingChain.push_back(sortedPairs[i].first);
    }
}
void insertPendingElements(std::vector<int> &mainChain, std::vector<int> &pendingChain)
{
    size_t jn;
    size_t jn_;
    size_t jn__;
    size_t tmp;
    int added = 0;
    int distance;
    bool flag = false;
    std::vector<int>::iterator it;
    
    jn = 3;
    jn_ = 1;
    jn__ = 1;
    size_t i = 0;
    while(i < pendingChain.size())
    {
        if (i == 0)
            mainChain.insert(mainChain.begin(), pendingChain[i]);
        else
        {
            if (i + 1 == jn && jn < pendingChain.size())
            {
                it = std::lower_bound(mainChain.begin(), mainChain.end(), pendingChain[i]);
                distance = std::distance(mainChain.begin(), it);
                mainChain.insert(mainChain.begin() + distance, pendingChain[i]);
                added++;
                tmp = jn;
                while(--jn > jn_)
                {
                    it = std::lower_bound(mainChain.begin(), mainChain.end(), pendingChain[jn - 1]);
                    distance = std::distance(mainChain.begin(), it);
                    mainChain.insert(mainChain.begin() + distance, pendingChain[jn - 1]);
                    added++;
                }
                jn__ = jn_;
                jn_ = tmp;
                jn = jn_ + (2 * jn__);
                if (jn >= pendingChain.size())
                {
                    i = tmp;
                    flag = true;
                    continue;
                }
            }
            else if (flag || jn >= pendingChain.size())
            {
                it = std::lower_bound(mainChain.begin(), mainChain.end(), pendingChain[i]);
                distance = std::distance(mainChain.begin(), it);
                mainChain.insert(mainChain.begin() + distance, pendingChain[i]);
            }
        }
        i++;
    }
}
void insertPendingElements(std::deque<int> &mainChain, std::deque<int> &pendingChain)
{
    size_t jn;
    size_t jn_;
    size_t jn__;
    size_t tmp;
    int added = 0;
    int distance;
    bool flag = false;
    std::deque<int>::iterator it;
    
    jn = 3;
    jn_ = 1;
    jn__ = 1;
    size_t i = 0;
    while(i < pendingChain.size())
    {
        if (i == 0)
            mainChain.insert(mainChain.begin(), pendingChain[i]);
        else
        {
            if (i + 1 == jn && jn < pendingChain.size())
            {
                it = std::lower_bound(mainChain.begin(), mainChain.end(), pendingChain[i]);
                distance = std::distance(mainChain.begin(), it);
                mainChain.insert(mainChain.begin() + distance, pendingChain[i]);
                added++;
                tmp = jn;
                while(--jn > jn_)
                {
                    it = std::lower_bound(mainChain.begin(), mainChain.end(), pendingChain[jn - 1]);
                    distance = std::distance(mainChain.begin(), it);
                    mainChain.insert(mainChain.begin() + distance, pendingChain[jn - 1]);
                    added++;
                }
                jn__ = jn_;
                jn_ = tmp;
                jn = jn_ + (2 * jn__);
                if (jn >= pendingChain.size())
                {
                    i = tmp;
                    flag = true;
                    continue;
                }
            }
            else if (flag || jn >= pendingChain.size())
            {
                it = std::lower_bound(mainChain.begin(), mainChain.end(), pendingChain[i]);
                distance = std::distance(mainChain.begin(), it);
                mainChain.insert(mainChain.begin() + distance, pendingChain[i]);
            }
        }
        i++;
    }
}

void printState(std::vector<int> &unsortedList, std::vector<int> &mainChain, double VecTime, double dequeTime)
{
    std::cout<<"Before: ";
    for(size_t i = 0; i < unsortedList.size(); i++)
        std::cout<<unsortedList[i]<<" ";
    std::cout<<std::endl;
    std::cout<<"After:  ";
    for(size_t i = 0; i < mainChain.size(); i++)
        std::cout<<mainChain[i]<<" ";
    std::cout<<std::endl;
    std::cout<<"Time to process a range of " << unsortedList.size()<<" elements with std::vector : "<<VecTime<<" µs"<<std::endl;
    std::cout<<"Time to process a range of " << unsortedList.size()<<" elements with std::deque : "<<dequeTime<<" µs"<<std::endl;
}

double PmergeVector(std::vector<int> &unsortedList, std::vector<int> &mainChain)
{
    clock_t start = clock();
    std::vector<std::pair<int, int> > pairs;
    std::vector<std::pair<int, int> > sortedPairs;
    std::vector<int> pendingChain;
    int tmp;
    bool isOdd = false;
    size_t listSize = unsortedList.size();
    if (listSize % 2 != 0 && listSize != 1)
    {
        isOdd = true;
        tmp = unsortedList[listSize - 1];
        unsortedList.pop_back();
        listSize --;
    }
    if(listSize > 1)
    {
        findPairs(unsortedList, pairs, listSize);
        sortedPairs = mergeSortPairs(pairs);
        mainChainConstructor(sortedPairs, mainChain, pendingChain);
        if (isOdd)
            pendingChain.push_back(tmp);
        insertPendingElements(mainChain, pendingChain);
        if (isOdd)
            unsortedList.push_back(tmp);
    }
    else
        mainChain.push_back(unsortedList[0]);
    clock_t end = clock();
    return (static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1e6));
}
double PmergeDeque(std::deque<int> &unsortedList, std::deque<int> &mainChain)
{
    clock_t start = clock();
    std::deque<std::pair<int, int> > pairs;
    std::deque<std::pair<int, int> > sortedPairs;
    std::deque<int> pendingChain;
    int tmp;
    bool isOdd = false;
    size_t listSize = unsortedList.size();
    if (listSize % 2 != 0 && listSize != 1)
    {
        isOdd = true;
        tmp = unsortedList[listSize - 1];
        unsortedList.pop_back();
        listSize --;
    }
    if(listSize > 1)
    {
        findPairs(unsortedList, pairs, listSize);
        sortedPairs = mergeSortPairs(pairs);
        mainChainConstructor(sortedPairs, mainChain, pendingChain);
        if (isOdd)
            pendingChain.push_back(tmp);
        insertPendingElements(mainChain, pendingChain);
        if (isOdd)
            unsortedList.push_back(tmp);
    }
    else
        mainChain.push_back(unsortedList[0]);
    clock_t end = clock();
    return (static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1e6));
}
void PmergeMe(std::vector<int> &unsortedList, std::deque<int> &unsortedListDeque)
{
    double vecTime;
    double dequeTime;
    std::deque<int> mainChainDeque;
    std::vector<int> mainChainVector;
    vecTime = PmergeVector(unsortedList, mainChainVector);
    dequeTime = PmergeDeque(unsortedListDeque, mainChainDeque);
    printState(unsortedList, mainChainVector, vecTime, dequeTime);
    if (isSorted(mainChainVector, unsortedList) && isSorted(mainChainDeque, unsortedListDeque))
        printf("OK\n");
    else
        printf("KO\n");
        
}