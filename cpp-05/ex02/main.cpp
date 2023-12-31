/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:42:43 by aalami            #+#    #+#             */
/*   Updated: 2023/12/17 14:57:35 by aalami           ###   ########.fr       */
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
        Bureaucrat a("a", 4);
        Form *form_1 = new RobotomyRequestForm("home");
        Form *form_2 = new ShrubberyCreationForm("office");
        Form *form_3 = new PresidentialPardonForm("office");
        {
            std::cout<<"-------------------RobotomyRequestForm-------------------"<<std::endl;
            form_1->beSigned(a);
            a.signForm(*form_1);
            a.executeForm(*form_1);
            delete form_1;
            std::cout<<std::endl;
        }
        {
            a.decrementGrade();
            std::cout<<"-------------------ShrubberyCreationForm-------------------"<<std::endl;
            form_2->beSigned(a);
            a.signForm(*form_2);
            a.executeForm(*form_2);
            delete form_2;
            std::cout<<std::endl;
        }
        {
            std::cout<<"-------------------PresidentialPardonForm-------------------"<<std::endl;
            form_3->beSigned(a);
            a.signForm(*form_3);
            a.executeForm(*form_3);
            delete form_3;
            std::cout<<std::endl;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}