/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:27:29 by aalami            #+#    #+#             */
/*   Updated: 2023/12/14 21:35:52 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("bureaucrat")
{
    grade = 1;
}
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
    if (grade >= 1 && grade <= 150)
        return ;
    if(grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}
Bureaucrat::~Bureaucrat()
{
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
    grade = obj.grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this == &obj)
        return(*this);
    grade = obj.grade;
    return (*this);
}
const std::string &Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return(grade);
}
void Bureaucrat::incrementGrade()
{
    grade--;
    if (grade < 1)
        throw GradeTooHighException();
}
void Bureaucrat::decrementGrade()
{
    grade++;
    if (grade > 150)
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &cout,  Bureaucrat &obj)
{
    cout << obj.getName() << ", bureaucrat grade "<<obj.getGrade();
    return (cout);
}
void Bureaucrat::signForm(Form &obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout<<name<<" signed "<<obj.getName()<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr<<name<<" couldn't sign "<<obj.getName()<< " because "<< e.what()<<std::endl;
    }
    
}
