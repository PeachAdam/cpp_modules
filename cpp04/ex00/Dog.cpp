/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:00:39 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:36:41 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    Animal::type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &copy){
    std::cout << "Dog copy constructor" << std::endl;
    *this = copy;
}

Dog::~Dog(){
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "* Hav! *" << std::endl;
}