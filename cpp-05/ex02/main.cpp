/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:42:43 by aalami            #+#    #+#             */
/*   Updated: 2023/12/02 17:42:43 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat a("a", 137);
        a.incrementGrade();
        Form *form_1 = new ShrubberyCreationForm("home");
        // Form *form_2 = new ShrubberyCreationForm("office");
        form_1->beSigned(a);
        a.signForm(*form_1);
        a.executeForm(*form_1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}