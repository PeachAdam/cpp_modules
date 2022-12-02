/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:35:05 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/11 17:43:39 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Default ClapTrap Constructor worked." << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap Constructor worked." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "Copy constructor worked" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap(){
    std::cout << "Bye" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    if (this->energyPoints > 0 && this->hitPoints > 0)
        std::cout << "ClapTrap " <<  this->name << " attacks "  << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    else
        std::cout << this->name << " has no energy pont or hit point" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << this->name << " has taken " << amount << " damage!" << std::endl;
    this->hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount){
    std::cout << this->name << " has gained " << amount << " hit point!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;
}

void ClapTrap::printStatus(void){
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Hit points: " << this->hitPoints << std::endl;
    std::cout << "Energy Points: " << this->energyPoints << std::endl;
    std::cout << "Attack Damage: " << this->attackDamage << std::endl;
}

std::string ClapTrap::getName(void){
    return(this->name);
}