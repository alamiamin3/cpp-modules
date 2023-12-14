/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:05:47 by aalami            #+#    #+#             */
/*   Updated: 2023/11/13 17:05:47 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("b1", 150);
        Bureaucrat b2("b2", 150);
        Bureaucrat b3("b3", 22);
        std::cout << b3 << std::endl;
        b1.incrementGrade();
        b2.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr <<e.what() << '\n';
    }
}