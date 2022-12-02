/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:03:54 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 15:10:31 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string	target;

	RobotomyRequestForm();

public:
	RobotomyRequestForm(const std::string);
	RobotomyRequestForm(const RobotomyRequestForm &);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &);

	void	execute(const Bureaucrat &) const;
};
#endif