/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:27:44 by aalami            #+#    #+#             */
/*   Updated: 2023/11/13 17:27:44 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("bureaucrat")
{
    grade = 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
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
