/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:42:43 by aalami            #+#    #+#             */
/*   Updated: 2023/12/05 18:12:07 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat a("a", 72);
        a.incrementGrade();
        Form *form_1 = new RobotomyRequestForm("home");
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