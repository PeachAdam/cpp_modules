/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:42:25 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 15:00:47 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <iostream>

class ShrubberyCreationForm : public Form
{
private:
    const std::string target;

    ShrubberyCreationForm();

public:
    ShrubberyCreationForm(const std::string);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);

    void	execute(const Bureaucrat &) const;
};

#endif