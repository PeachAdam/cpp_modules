/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:06:12 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:38:53 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal constructor" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = copy;
}
        
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
    std::cout << "WrongAnimal copy assigment" << std::endl;
    this->type = copy.type;
    return *this;
}

void WrongAnimal::makeSound(){
    std::cout << "* WrongAnimal! *" << std::endl;
}