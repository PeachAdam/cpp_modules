/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:54:39 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/28 13:51:27 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
    T               *arr;
    unsigned int    size;
public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(const Array &copy);
    Array &operator=(const Array &copy);
    T	&operator[](unsigned int) const;

	unsigned int	getSize(void) const;

	class IndexOutOfRange : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

#endif