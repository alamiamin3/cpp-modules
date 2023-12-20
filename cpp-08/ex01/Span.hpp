/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:43:35 by aalami            #+#    #+#             */
/*   Updated: 2023/12/20 19:38:23 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int N;
    std::vector<int> Vect;
public:
    class VectorFilled : public std::exception
    {
        const char *what() const throw()
        {
            return ("Vector already full");
        }
    };
    class SpanNotFound : public std::exception
    {
        const char *what() const throw()
        {
            return ("can't find a span , vector not filled properly");
        }
    };
    Span();
    Span(const Span &obj);
    Span &operator=(const Span &obj);
    ~Span();
    Span(unsigned int size);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
};



#endif