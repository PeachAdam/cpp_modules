/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:20:28 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/20 18:44:30 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat{
private:
    std::string name;
    int         grade;

	Bureaucrat();

public:
    Bureaucrat(const std::string &name, const int grade);
    Bureaucrat(const Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &copy);

    std::string getName(void) const;
    int getGrade(void) const;

    void incrementGrade(void);
    void decrementGrade(void);

	void signForm(Form &);

    class GradeTooHighException : public std::exception{
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception{
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &copy);

#endif