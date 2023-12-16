/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:10:58 by aalami            #+#    #+#             */
/*   Updated: 2023/12/16 22:19:13 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45), target("target")
{
}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Robotomy Request Form", 72, 45), target(target)
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj.getName(), obj.getGradeToSign(), obj.getGradeToExec()), target(obj.target)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    (void)obj;
    return (*this);
}
void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    
    if (this->getState() && executor.getGrade() <= this->getState())
    {
        std::cout<<"Zzzzzzzzzzzz"<<std::endl;
        std::cout<<target<<" has been robotomized successfully 50%% of all time"<<std::endl;
    }
    else
    {
        std::cout<<"The robotomy failed"<<std::endl;
        if (!this->getState())
            throw FormNotSigned();
        throw GradeTooLowException();
    }
}