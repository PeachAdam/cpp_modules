/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:15:04 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 16:56:32 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
}

Intern::Intern(const Intern &copy){
    *this = copy;
}

Intern::~Intern(){
}

Intern &Intern::operator=(const Intern &copy){
    return *this;
}

Form	*Intern::makeform(std::string formName, std::string targetName){
	std::string formNames[3] = {
        "shrubbery creation",
		"robotomy request",
		"presidential pardon"
    };

    Form		*forms[3] =
	{
		new ShrubberyCreationForm(targetName),
		new RobotomyRequestForm(targetName),
		new PresidentialPardonForm(targetName)
	};

    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
			std::cout << "Intern creates " << formName << std::endl;
			return (forms[i]);
        }
    }
	std::cout << "Intern can't create" << formName << std::endl;
    return nullptr;
}
