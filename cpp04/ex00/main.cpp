/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:17:36 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:37:46 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
 
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << "|---------------------------------------|" << std::endl << std::endl;

    {
        WrongAnimal *arr[2];
        WrongAnimal a;
        WrongCat b;

        arr[0] = &a;
        arr[1] = &b;

        arr[0]->makeSound();
        arr[1]->makeSound();
    }

    return 0;
}