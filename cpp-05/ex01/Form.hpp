/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:28:33 by aalami            #+#    #+#             */
/*   Updated: 2023/12/14 19:02:04 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMAT_HPP
#define FORMAT_HPP
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
        const char *what() const throw()
        {
            return ("Form can't be signed : Grade too high");
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ("Form can't be signed : Grade too low");
        }
    };
    Form();
    Form(const std::string &name, const int to_sign, const int to_exec);
    ~Form();
    Form(const Form &obj);
    Form &operator=(const Form &obj);
    const std::string &getName() const;
    int getGradeToSign() const;
    int getGradeToExec() const;
    bool getState() const;
    void beSigned(const Bureaucrat &obj);
};
std::ostream &operator<<(std::ostream &cout, const Form &obj);

#endif