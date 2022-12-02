/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:58:28 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/28 13:08:52 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
	:	size(0)
{
	this->arr = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
	:	size(n)
{
	this->arr = new T[n];
}

template<typename T>
Array<T>::Array(const Array<T> &copy)
	:	size(copy.getSize())
{
	this->arr = new T[copy.getSize()];
	for (unsigned int i = 0; i < size; i++)
		this->arr[i] = copy.arr[i];
}

template<typename T>
Array<T>::~Array(){
	delete[] this->arr;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &copy)
{
	delete[] this->arr;
	this->size = copy.getSize();
	this->arr = new T[this->size];
	for (int i = 0; i < this->size; i++)
		this->arr[i] = copy.arr[i];
	return *this;
}

template<typename T>
T	&Array<T>::operator[](unsigned int n) const
{
	if (n >= this->getSize())
		throw Array<T>::IndexOutOfRange();
	return arr[n];
}

template<typename T>
unsigned int	Array<T>::getSize(void) const
{
	return (this->size);
}

template<typename T>
const char *Array<T>::IndexOutOfRange::what() const throw()
{
	return ("Exception: Index out of the range of the array.");
}