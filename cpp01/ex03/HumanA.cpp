/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:59:43 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 15:43:09 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
	:	m_name(name), m_weapon(weapon)
{
}

void	HumanA::attack(void)
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}