/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:31:12 by aalami            #+#    #+#             */
/*   Updated: 2023/12/14 18:50:51 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

        void ad()
        {
            system("leaks Intern");
        }
int main()
{
    try
    {
        Intern someRandomIntern;
        Form* form_1;
        form_1 = someRandomIntern.makeForm("presidential pardon", "Bender");
        Bureaucrat a("a", 2);
        a.incrementGrade();
        if(form_1)
        {    
            form_1->beSigned(a);
            a.signForm(*form_1);
            a.executeForm(*form_1);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}