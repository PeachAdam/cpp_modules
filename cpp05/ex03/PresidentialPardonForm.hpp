/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:13:53 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 15:14:17 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string	target;

	PresidentialPardonForm();

public:
	PresidentialPardonForm(const std::string);
	PresidentialPardonForm(const PresidentialPardonForm &);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);

	void	execute(const Bureaucrat &) const;
};

#endif