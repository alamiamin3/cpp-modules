/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:50:00 by aalami            #+#    #+#             */
/*   Updated: 2023/12/20 19:44:04 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}
Span::~Span(){}
Span::Span(unsigned int size) : N(size) 
{}
Span::Span(const Span &obj)
{
    *this = obj;
}
Span &Span::operator=(const Span &obj)
{
    if (this == &obj)
        return *this;
    N = obj.N;
    Vect = obj.Vect;
    return (*this);
}
void Span::addNumber(int number)
{
    try
    {
        if (Vect.size() < N)
            Vect.push_back(number);
        else
            throw VectorFilled();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
int Span::longestSpan()
{
    try
    {
        if (!Vect.size() || Vect.size() == 1)
            throw SpanNotFound();
        std::sort(Vect.begin(), Vect.end());
        return (*(Vect.end() - 1) - *(Vect.begin()));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (-1);
}
int Span::shortestSpan()
{
    int ret = -1;
    try
    {
        if (!Vect.size() || Vect.size() == 1)
            throw SpanNotFound();
        std::sort(Vect.begin(), Vect.end());
        ret = *(Vect.begin() + 1) - *(Vect.begin());
        for (std::vector<int>::iterator it = Vect.begin(); it != Vect.end() ; it++)
        {
            if (it + 1 != Vect.end() && *(it+1) - *it < ret)
                ret = *(it+1) - *it;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (ret);
}