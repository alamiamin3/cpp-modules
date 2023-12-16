/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:05:45 by aalami            #+#    #+#             */
/*   Updated: 2023/12/16 22:25:17 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5), target("target") 
{
}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential Pardon Form", 25, 5), target(target) 
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj.getName(), obj.getGradeToSign(), obj.getGradeToExec()), target(obj.target)
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    (void)obj;
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    
    if (this->getState() && executor.getGrade() <= this->getGradeToExec())
    {
        std::cout<<target<<" has been pardoned by Zaphod Beeblebrox"<<std::endl;
    }
    else
    {
        if (!this->getState())
            throw FormNotSigned();
        throw GradeTooLowException();
    }
}