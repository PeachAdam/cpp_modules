/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:28:57 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 15:29:09 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

typedef void	(Harl::*FunctionPointer)();

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	bool		found;
	std::string func_names[4] =
	{
		std::string("debug"),
		std::string("info"),
		std::string("warning"),
		std::string("error")
	};
	FunctionPointer	funcs[4] =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	found = false;
	for (int i = 0; i < 4; i++)
	{
		if (func_names[i] == level)
		{
			found = true;
			(this->*funcs[i])();
			break;
		}
	}
	if (!found)
		std::cout <<  "No level exists in that name." << std::endl;
}
