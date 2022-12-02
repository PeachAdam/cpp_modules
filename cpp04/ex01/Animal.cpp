/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:39:19 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:40:36 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
    :type("Animal")
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &copy){
    std::cout << "Animal copy constructor" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy){
    this->type = copy.type;
    std::cout << "Animal copy assigment operator" << std::endl;
    return(*this);
}

std::string Animal::getType( void ) const{
    return(this->type);
}

void Animal::makeSound(void) const{
        std::cout << "* Animal! *" << std::endl;
}