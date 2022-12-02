/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:00:39 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:42:52 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    Animal::type = "Dog";
    this->brain = new Brain;
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &copy){
    std::cout << "Dog copy constructor" << std::endl;
    *this = copy;
}

Dog::~Dog(){
    std::cout << "Dog destructor" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(const Dog &copy){
    std::cout << "Dog copy assigment" << std::endl;

    if (this == &copy)
        return *this;

    this->type = copy.type;
    this->brain = new Brain;
    *this->brain = *copy.brain;
    return(*this);
}

void    Dog::makeSound(void) const{
        std::cout << "* Meow! *" << std::endl;
}