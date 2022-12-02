/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 07:49:56 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/23 19:03:27 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int		x;
	int		y;
	char	c;
	bool	b;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *data = new Data;

	data->x = 5;
	data->y = -10;
	data->c = 'a';

	std::cout << deserialize(serialize(data))->x <<std::endl;
	std::cout << deserialize(serialize(data))->y <<std::endl;
	std::cout << deserialize(serialize(data))->c <<std::endl;
	std::cout << deserialize(serialize(data))->b <<std::endl;

	delete data;


	return (0);
}