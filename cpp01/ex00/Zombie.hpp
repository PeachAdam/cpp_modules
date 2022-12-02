/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:20:23 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 13:59:06 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string zombie_name;
	public:
		void announce(void);
		Zombie(std::string _name);
		~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif