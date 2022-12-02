/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:20:29 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 14:23:13 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *lol;


	lol = newZombie("yuuus");
	lol->announce();

	randomChump("al2");
	
	delete lol;
	return (0);
}