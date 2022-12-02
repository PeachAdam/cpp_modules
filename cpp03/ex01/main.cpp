/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:35:33 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/11 17:34:51 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap claptrap("Clyde");
    ScavTrap scavtrap("Scarlet");
    
	std::cout << std::endl;
    
	claptrap.attack("Someone");
    scavtrap.attack("Someone");
    
	std::cout << std::endl;
    
	scavtrap.guardGate();
    
	std::cout << std::endl;
    
	scavtrap.takeDamage(50);
    scavtrap.takeDamage(50);
    scavtrap.attack("Someone");
    scavtrap.beRepaired(20);
    scavtrap.attack("Someone");
    
	std::cout << std::endl;
    
	return (0);
}