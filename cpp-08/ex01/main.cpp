/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:16:40 by aalami            #+#    #+#             */
/*   Updated: 2023/12/20 21:27:59 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
 #include <unistd.h>
#define MAX_VAL 100000
int main()
{
        {
               Span sp = Span(5);
                sp.addNumber(6);
                sp.addNumber(3);
                sp.addNumber(17);
                sp.addNumber(9);
                sp.addNumber(11);
                std::cout << sp.shortestSpan() << std::endl;
                std::cout << sp.longestSpan() << std::endl;
        }
        {
                Span sp = Span(MAX_VAL);
                for(int i = MAX_VAL; i >= 1; i--)
                        sp.addNumber(i);
                std::cout <<sp.shortestSpan() << std::endl;
                std::cout << sp.longestSpan() << std::endl;
                sp.addNumber(5);
        }
        {
                Span sp(5);
                sp.addNumber(1);
                sp.addNumber(4);
                sp.addNumber(3);
                sp.addNumber(87);
                sp.longestSpan();
        }

    
}