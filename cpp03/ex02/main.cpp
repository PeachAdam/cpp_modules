/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:35:33 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/11 17:50:55 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Clyde");
    ScavTrap scavtrap("Scarlet");
    FragTrap fragtrap("Jayce");
    
	std::cout << std::endl;
    
	fragtrap.attack("Someone");
    claptrap.attack("Someone");
    scavtrap.attack("Someone");
    
	std::cout << std::endl;
    
	fragtrap.highFivesGuys();
    
	std::cout << std::endl;
    
	fragtrap.takeDamage(50);
    fragtrap.takeDamage(50);
    fragtrap.attack("Someone");
    fragtrap.beRepaired(20);
    fragtrap.attack("Someone");
    
	std::cout << std::endl;
    
	return (0);
}