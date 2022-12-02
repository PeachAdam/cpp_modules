/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:20:28 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 18:09:13 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const int grade)
    : name(name), grade(grade)
{
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
    : name(copy.name), grade(copy.grade)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    return *this;
}

void Bureaucrat::incrementGrade(){
    if ((this->grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade(){
    if ((this->grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

std::string Bureaucrat::getName() const{
    return this->name;
}

int Bureaucrat::getGrade() const{
    return this->grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &copy){
    os << copy.getName() << ", bureaucrat grade " << copy.getGrade();
    return os;
}