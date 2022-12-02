/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:24:07 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 14:36:12 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	int	N = 10;
	Zombie	*Horde = zombieHorde(N, "Bruce Lee");

	if (Horde == NULL)
		return (1);
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete[] Horde;
}