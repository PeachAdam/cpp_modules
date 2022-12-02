/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:13:53 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 15:33:33 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:	Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	:	Form("PresidentialPardonForm", 25, 5), target(target)
{

}
	
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
	:	Form(copy), target(copy.target)
{

}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy){
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &copy) const{
	if (copy.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}