/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:12:44 by aalami            #+#    #+#             */
/*   Updated: 2023/11/28 19:12:44 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
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
Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this == &obj)
        return(*this);
    name = obj.name;
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
void Bureaucrat::signForm(const Form &obj)
{
    if (obj.getState())
        std::cout<<name<<" signed "<<obj.getName()<<std::endl;
    else
        std::cout<<name<<" couldn't sign "<<obj.getName()<< " because "<<std::endl;

}
void Bureaucrat::executeForm(Form const & form)
{
    try {
        form.execute(*this);
        std::cout<<name<<" executed "<<form.getName()<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        std::cerr <<name<<" can't execute this form"<< std::endl;

    }
}