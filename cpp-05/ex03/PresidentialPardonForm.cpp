/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:09:50 by aalami            #+#    #+#             */
/*   Updated: 2023/12/06 16:09:52 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : target(target)
{
    to_sign = 25;
    to_exc = 5;
    is_signed = false;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    *this = obj;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this == &obj)
        return (*this);
    name  = obj.name;
    is_signed = obj.is_signed;
    to_sign = obj.to_sign;
    to_exc = obj.to_exc;
    target = obj.target;
    return (*this);
}
void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    
    if (is_signed && executor.getGrade() <= to_exc)
    {
        std::cout<<target<<" has been pardoned by Zaphod Beeblebrox"<<std::endl;
    }
    else
        throw GradeTooLowException();
}