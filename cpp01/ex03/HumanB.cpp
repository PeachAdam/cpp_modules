/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:05:55 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 15:42:59 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
	:	m_name(name)
{
}

void	HumanB::attack(void)
{
	std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}