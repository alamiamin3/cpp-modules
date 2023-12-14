/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:06:59 by aalami            #+#    #+#             */
/*   Updated: 2023/12/14 21:13:48 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("a", 1);
        Form form_1("first_form", 1, 1);
        Form form_2("second_form", 1, 3);
        form_1.beSigned(a);
        a.signForm(form_1);
        a.decrementGrade();
        a.signForm(form_2);
        std::cout<<a<<std::endl;
        std::cout<<form_1<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
