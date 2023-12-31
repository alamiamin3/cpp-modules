/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:46:38 by aalami            #+#    #+#             */
/*   Updated: 2023/12/16 21:13:35 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    for (int i = 0; i < 4 ; i++)
        forms[i] = NULL;
}
Intern::Intern(const Intern &obj)
{
    *this = obj;
}
Intern &Intern::operator=(const Intern &obj)
{
    if (this == &obj)
        return (*this);
    int i = -1;
    while (++i < 3)
        forms[i] = obj.forms[i];
    return (*this);
}
Intern::~Intern()
{
    int i = -1;
    while (++i < 3)
        delete forms[i];
}
Form *Intern::makeForm(const std::string &form, const std::string &target)
{
    if (forms[0])
    {
        for (int i = 0; i < 4 ; i++)
            delete forms[i];
    }
    forms[0] = new ShrubberyCreationForm(target);
    forms[1] = new RobotomyRequestForm(target);
    forms[2] = new PresidentialPardonForm(target);
    std::string FormNameTab[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i = 0;
    while (i < 3 && FormNameTab[i].compare(form))
        i++;
    if (i == 3)
        std::cout<<"Unknown Form"<<std::endl;
    return (forms[i]);

}