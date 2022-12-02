/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:20:23 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 14:18:02 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void){
    std::cout << "<" << zombie_name << "> " << "BraiiiiiiinnnzzzZ" << std::endl;
}

Zombie::Zombie(std::string _name)
    :   zombie_name(_name)
{
}

Zombie::~Zombie(void){
	std::cout << "[" << zombie_name << "] " << "die." << std::endl;
}