/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:06:47 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 18:13:17 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
private:
    const std::string   name;
    bool                is_signed;
    const int           grade_sign;
    const int           grade_exec;
    
    Form();

public:
    Form(const std::string name, const int grade_sign, const int grade_exec);
    Form(const Form &copy);
    ~Form();
    Form &operator=(const Form &copy);

    std::string getName() const;
    bool getSigned() const;
    int getGradeExec() const;
    int getGradeSign() const;

    void beSigned(const Bureaucrat &target);


    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw() { return "Grade too high"; }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw() { return "Grade too low"; }
    };
};

std::ostream &operator<<(std::ostream& os, const Form& copy);

#endif