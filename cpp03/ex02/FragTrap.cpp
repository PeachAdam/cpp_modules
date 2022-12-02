/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:48:43 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/11 16:07:14 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    ClapTrap::name = "Default";
    ClapTrap::hitPoints = 100;
    ClapTrap::attackDamage = 30;
    ClapTrap::energyPoints = 100;
    std::cout << "FragTrap default constructor worked." << std::endl;
}

FragTrap::FragTrap(std::string name){
    ClapTrap::name = name;
    ClapTrap::hitPoints = 100;
    ClapTrap::attackDamage = 30;
    ClapTrap::energyPoints = 100;
    std::cout << "FragTrap string constructor worked." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy){
    std::cout << "FragTrap Copy Constructor worked." << std::endl;
    *this = copy;
}

FragTrap::~FragTrap(){
    std::cout << "Bye (FragTrap)" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "High five with " << ClapTrap::name << "(FragTrap)" << std::endl;
}