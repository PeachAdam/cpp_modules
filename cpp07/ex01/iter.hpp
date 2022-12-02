/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:21:04 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/28 14:48:48 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arr, int size, void (*func)(T &)){
    for(int i = 0; i < size; i++)
        func(arr[i]);
}
template <typename T>
void    print(T &i)
{
    std::cout << i << " ";
}

template <typename T>
void    incrementPrint(T &i)
{
    std::cout << ++i << " ";
}

template <typename T>
void    decrementPrint(T &i)
{
    std::cout << --i << " ";
}

#endif