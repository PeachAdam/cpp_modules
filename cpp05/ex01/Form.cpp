/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:06:47 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 18:16:36 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void	checkGrades(int signGrade, int execGrade)
{
	if (signGrade > 150)
		throw Form::GradeTooHighException();
	else if (signGrade < 1)
		throw Form::GradeTooLowException();
	if (execGrade > 150)
		throw Form::GradeTooHighException();
	else if (execGrade < 1)
		throw Form::GradeTooLowException();
}

Form::Form(const std::string name, const int grade_sign, const int grade_exec)
    : name(name), grade_sign(grade_sign), grade_exec(grade_exec), is_signed(false)
{
    checkGrades(grade_sign, grade_exec);
}

Form::Form(const Form &copy)
    : name(copy.getName()), grade_sign(copy.getGradeSign()), grade_exec(copy.getGradeExec()), is_signed(copy.getSigned())
{
}

Form::~Form(){
}
    
Form &Form::operator=(const Form &copy){
    is_signed = copy.getSigned();
    return *this;
}

std::string Form::getName() const{
    return this->name;
}

bool Form::getSigned() const{
    return this->is_signed;
}

int Form::getGradeExec() const{
    return this->grade_exec;
}

int Form::getGradeSign() const{
    return this->grade_sign;
}

void Form::beSigned(const Bureaucrat &target){
    if(target.getGrade() <= this->getGradeSign())
        this->is_signed = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream& os, const Form& copy){
   if (copy.getSigned() == false)
		os << copy.getName() << " named form is not signed. Form has a minimum grade required to sign of " << copy.getGradeSign() << " and has a minimum grade required to execute of " << copy.getGradeExec() << std::endl;
	else
		os << copy.getName() << " named form is signed. Form has a minimum grade required to sign of " << copy.getGradeSign() << " and has a minimum grade required to execute of " << copy.getGradeExec() << std::endl;
	return (os);
}