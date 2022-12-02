/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:17:36 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:47:21 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
        Animal *arr[10];
        for (int i = 0; i <= 4; i++)
            arr[i] = new Dog();
        for (int i = 4; i <= 9; i++)
            arr[i] = new Cat();

        for (int i = 9; i >= 0; i--)
            delete arr[i];
    }
        
    std::cout << std::endl << "|---------------------------------------|" << std::endl << std::endl;

    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        delete j;
        delete i;
    }

    return 0;
}