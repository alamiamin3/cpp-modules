/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:05:45 by aalami            #+#    #+#             */
/*   Updated: 2023/12/14 21:52:30 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
//fixed
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : target(target) , Form("Presidential Pardon Form", 25, 5)
{
    is_signed = false;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : target(obj.target), Form(obj.name, obj.to_sign, obj.to_exc)
{
    
    is_signed = obj.is_signed;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this == &obj)
        return (*this);
    is_signed = obj.is_signed;
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