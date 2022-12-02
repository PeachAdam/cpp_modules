/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:06:12 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:39:15 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
    std::cout << "WrongCat copy constructor" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
    std::cout << "WrongCat copy asigment" << std::cout;
    this->type = copy.type;
    return *this;
}

void WrongCat::makeSound(){
    std::cout << "* WrongCat! *" << std::endl;
}