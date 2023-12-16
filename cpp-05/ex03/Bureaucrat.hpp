/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:08:37 by aalami            #+#    #+#             */
/*   Updated: 2023/12/15 15:51:31 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "AForm.hpp"

class Form;
class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &obj);
    Bureaucrat(const Bureaucrat &obj);
    const std::string &getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    void signForm(Form &form);
    void executeForm(Form const & form);
};
std::ostream &operator<<(std::ostream &cout,  Bureaucrat &obj);

#endif