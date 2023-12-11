/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:40:49 by aalami            #+#    #+#             */
/*   Updated: 2023/12/05 18:15:51 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : target(target)
{
    to_sign = 72;
    to_exc = 45;
    is_signed = false;
    name = "Robotomy Request Form";
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
    *this = obj;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
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
void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    
    if (is_signed && executor.getGrade() <= to_exc)
    {
        std::cout<<"Zzzzzzzzzzzz"<<std::endl;
        std::cout<<target<<" has been robotomized successfully 50%% of all time"<<std::endl;
    }
    else
    {
        std::cout<<"The robotomy failed"<<std::endl;
        throw GradeTooLowException();
    }
}