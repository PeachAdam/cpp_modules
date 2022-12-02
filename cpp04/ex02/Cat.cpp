/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:00:39 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:45:24 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    Animal::type = "Cat";
    this->brain = new Brain;
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &copy){
    std::cout << "Cat copy constructor" << std::endl;
    *this = copy;
}

Cat::~Cat(){
    std::cout << "Cat destructor" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(const Cat &copy){
    std::cout << "Cat copy assigment" << std::endl;

    if (this == &copy)
        return *this;

    this->type = copy.type;
    this->brain = new Brain;
    *this->brain = *copy.brain;
    return(*this);
}

void Cat::makeSound(void) const{
    std::cout << "* Meow! *" << std::endl;
}