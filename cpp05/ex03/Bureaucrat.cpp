/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:20:28 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 15:34:16 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const int grade){
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->name = name;
    this->grade = grade;
    
}

Bureaucrat::Bureaucrat(){
    
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy){
    this->name = copy.name;
    this->grade = copy.grade;
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

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " named form because " << e.what() << std::endl;
	}
	
}

void    Bureaucrat::executeForm(const Form &form){
    try
    {
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
		form.execute(*this);
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " named form because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &copy){
    os << copy.getName() << ", bureaucrat grade " << copy.getGrade();
    return os;
}