/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:32:01 by aalami            #+#    #+#             */
/*   Updated: 2023/12/29 18:26:45 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isValidNumber(char *arg)
{
    std::string str = arg;
    size_t i = 0;
    size_t j = 0;
    while(isspace(str[i]))
        i++;
    for(j = i; j < str.size(); j++)
    {
        if (j == i && (str[j] == '+' || str[j] == '-'))
            continue;
        else if (!isdigit(str[j]))
            break;
    }
    while(isspace(str[j]))
        j++;
    return j == str.size();
}
bool parseArgs(char **argv, int argc, std::vector<int> &unsortedList, std::deque<int> &unsortedListDeque)
{
    long value;
    std::vector<int>::iterator it;
    for(int i = 1; i < argc;i++)
    {
        value = atol(argv[i]);
        if (!isValidNumber(argv[i]) || value > INT_MAX || value < INT_MIN)
            return false;
        it = std::find(unsortedList.begin(), unsortedList.end(), static_cast<int>(value));
        if (it == unsortedList.end())
        {
            unsortedList.push_back(static_cast<int>(value));
            unsortedListDeque.push_back(static_cast<int>(value));
        }
    }
    return true;
}
int main(int argc , char **argv)
{
    try
    {
        if(argc >= 2)
        {
            std::vector<int> unsortedList;
            std::deque<int> unsortedListDeque;
            if (!parseArgs(argv, argc, unsortedList, unsortedListDeque))
                throw "Invalid arguments";
            PmergeMe(unsortedList, unsortedListDeque);
        }
        else
                throw "Invalid arguments";
    }
    catch(const char *e)
    {
        std::cerr << e << '\n';
    }   
}