/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:49:30 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/11 17:31:55 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    ClapTrap::name = "Default";
    ClapTrap::hitPoints = 100;
    ClapTrap::attackDamage = 50;
    ClapTrap::energyPoints = 20;
    std::cout << "ScavTrap default constructor worked." << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    ClapTrap::name = name;
    ClapTrap::hitPoints = 100;
    ClapTrap::attackDamage = 50;
    ClapTrap::energyPoints = 20;
    std::cout << "ScavTrap string constructor worked." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
    std::cout << "ScavTrap Copy Constructor worked." << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap(){
    std::cout << "Bye (ScavTrap)" << std::endl;
}

void ScavTrap::guardGate(void){
    std::cout << "ScavTrap "<< ClapTrap::name <<" is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (ClapTrap::energyPoints > 0 && ClapTrap::hitPoints > 0)
        std::cout << "ScavTrap " <<  ClapTrap::name << " attacks "  << target << " causing " << ClapTrap::attackDamage << " points of damage!" << std::endl;
    else
        std::cout << ClapTrap::name << " has no energy pont or hit point" << std::endl;
    ScavTrap::energyPoints--;
}