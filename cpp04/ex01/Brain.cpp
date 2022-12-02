/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:32:54 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:41:03 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor" << std::endl;   
}

Brain::Brain(const Brain &copy){
    std::cout << "Brain copy constructor" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy){
    for(int i = 0; i <= 100; i++)
        this->ideas[i] = copy.ideas[i];
    std::cout << "Brain copy assigment operator" << std::endl;
    return *this;
}