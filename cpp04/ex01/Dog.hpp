/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:35:13 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/16 15:42:57 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
		
    public:
        Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		
		void makeSound() const;
};

#endif
