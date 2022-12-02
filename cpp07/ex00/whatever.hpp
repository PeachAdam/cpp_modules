/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:09:58 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/24 18:23:13 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif