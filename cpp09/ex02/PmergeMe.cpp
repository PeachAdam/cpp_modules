/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:29:05 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/24 12:29:27 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <ctime>

template<typename Container>
void merge_insert_sort(Container& c)
{
    typename Container::iterator i, j, min;
    for(i = c.begin(); i != c.end(); ++i)
    {
        min = i;
        for(j = i; j != c.end(); ++j)
        {
            if(*j < *min)
                min = j;
        }
        iter_swap(i, min);
    }
}
