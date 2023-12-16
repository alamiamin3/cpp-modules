/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:27:46 by aalami            #+#    #+#             */
/*   Updated: 2023/12/16 16:42:33 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

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
};
std::ostream &operator<<(std::ostream &cout,  Bureaucrat &obj);

#endif