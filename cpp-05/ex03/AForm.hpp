/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:04:22 by aalami            #+#    #+#             */
/*   Updated: 2023/12/16 22:09:53 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string name;
    bool is_signed;
    const int to_sign;
    const int to_exc;
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
    class FormNotSigned : public std::exception
    {
    public:
        const char *what() const throw();
    };
    Form();
    Form(const std::string &name, const int to_sign, const int to_exec);
    virtual ~Form();
    Form(const Form &obj);
    Form &operator=(const Form &obj);
    const std::string &getName() const;
    int getGradeToSign() const;
    int getGradeToExec() const;
    bool getState() const;
    void beSigned(const Bureaucrat &obj);
    virtual void execute(const Bureaucrat &executor) const = 0;
};
std::ostream &operator<<(std::ostream &cout, const Form &obj);

#endif