/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:54:37 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 15:47:24 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
	:	m_type(type)
{
}

const std::string	&Weapon::getType()
{
	return ((std::string &)m_type);
}

void	Weapon::setType(std::string type)
{
	this->m_type = type;
}