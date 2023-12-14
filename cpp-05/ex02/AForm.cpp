/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:59:30 by aalami            #+#    #+#             */
/*   Updated: 2023/12/14 20:59:07 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form(): name("form"), to_sign(1), to_exc(1)
{
    is_signed = false;
}
Form::~Form(){}
Form::Form(const std::string &name, const int to_sign, const int to_exec) : name(name), to_sign(to_sign), to_exc(to_exec)
{
    is_signed = false;
    if (to_sign < 1 || to_exc < 1)
        throw GradeTooHighException();
    else if (to_sign > 150 || to_exc > 150)
        throw GradeTooLowException();
}
Form::Form(const Form &obj) : name(obj.name), to_sign(obj.to_sign), to_exc(obj.to_exc)
{
    is_signed = obj.is_signed;
}
Form &Form::operator=(const Form &obj)
{
    if (this == &obj)
        return (*this);
    is_signed = obj.is_signed;
    return(*this);
}
const std::string &Form::getName() const
{
    return(name);
}
int Form::getGradeToSign() const
{
    return(to_sign);
}
int Form::getGradeToExec() const
{
    return(to_exc);
}
bool Form::getState() const
{
    return(is_signed);
}
void Form::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > to_sign)
        throw GradeTooLowException();
    else
        is_signed = true;
}
std::ostream &operator<<(std::ostream &cout, const Form &obj)
{
    cout << obj.getName() << ",  grade to sign "<<obj.getGradeToSign()<<",  grade to execute "<< obj.getGradeToExec();
    if (obj.getState())
        cout<<" , the Form was already signed !";
    else
        cout<<" , the Form is not signed yet !";

    return (cout);
}