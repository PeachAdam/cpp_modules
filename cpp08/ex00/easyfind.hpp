/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 00:50:19 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/30 12:57:02 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template<typename T>
int	easyfind(T &container, int value)
{
	int	i = 0;
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == value)
			return (i);
		i++;
	}
	
	return (-1);
}

#endif