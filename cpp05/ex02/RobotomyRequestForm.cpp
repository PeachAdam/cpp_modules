/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:05:41 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 16:46:46 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:	Form("RobotomyRequestForm", 72, 45)
{
	srand(time(0));
}
	
RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	:	Form("RobotomyRequestForm", 72, 45), target(target)
{
	srand(time(0));
}
	
    
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
	:	Form(copy), target(copy.target)
{
	srand(time(0));    
}

RobotomyRequestForm::~RobotomyRequestForm(){

}
	
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &){
    return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	else
	{
		int random = rand() % 2;

		if (random)
			std::cout << target << " has been robotomized." << std::endl;
		else
			std::cout << target << "'s robotomy has been failed." << std::endl;
	}
}