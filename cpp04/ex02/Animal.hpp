/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:35:13 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:28:01 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);

		virtual std::string getType( void ) const;
		virtual void makeSound() const = 0;
};

#endif
