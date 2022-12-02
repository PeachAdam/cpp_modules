/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:00:39 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:36:54 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    Animal::type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &copy){
    std::cout << "Cat copy constructor" << std::endl;
    *this = copy;
}

Cat::~Cat(){
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound(void) const{
    std::cout << "* Meow! *" << std::endl;
}