/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:50:18 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 15:42:55 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	m_name;
	Weapon		*m_weapon;

public:
	HumanB(std::string);

	void	attack(void);
	void	setWeapon(Weapon &);
};

#endif