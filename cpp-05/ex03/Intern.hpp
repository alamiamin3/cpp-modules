/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:36:38 by aalami            #+#    #+#             */
/*   Updated: 2023/12/16 21:02:52 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
    Form *forms[4];
public:
    Intern();
    ~Intern();
    Intern(const Intern &obj);
    Intern &operator=(const Intern &obj);
    Form *makeForm(const std::string &form, const std::string &target);
};


#endif