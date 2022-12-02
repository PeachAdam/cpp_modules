/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:20:28 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 18:01:50 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
private:
    const std::string name;
    int         grade;
    
    Bureaucrat();

public:
    Bureaucrat(const std::string &name, const int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &copy);

    std::string getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception{
        public:
            const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception{
        public:
            const char* what() const throw() { return "Grade too low"; }
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &copy);

#endif