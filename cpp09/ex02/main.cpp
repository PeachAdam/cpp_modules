/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:00:18 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/21 22:14:21 by yaysu            ###   ########.fr       */
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
    typename Container::iterator i, j;
    for(i = c.begin(); i != c.end(); ++i)
    {
        for(j = i; j != c.begin() && *std::prev(j); --j)
            iter_swap(j, std::prev(j));
    }
}

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        std::cout << "Error: No sequence provided." << std::endl;
        return 1;
    }

    std::vector<int> v;
    std::list<int> l;

    for(int i = 1; i < argc; ++i)
    {
        int n;
        try
        {
            n = std::stoi(argv[i]);
        }
        catch(const std::exception& e)
        {
            std::cout << "Error: Invalid argument \"" << argv[i] << "\"" << std::endl;
            return 1;
        }

        if(n <= 0)
        {
            std::cout << "Error: Invalid input \"" << n << "\", must be positive." << std::endl;
            return 1;
        }

        v.push_back(n);
        l.push_back(n);
    }

    std::cout << "Before: ";
    for(std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    time_t start = clock();
    merge_insert_sort(v);
    time_t end = clock();

    std::cout << "After: ";
    for(std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << std::fixed << "Time to process a range of " << v.size() << " elements with vector: " << double(end - start) / CLOCKS_PER_SEC << " s" << std::endl;

    start = clock();
    merge_insert_sort(l);
    end = clock();

    std::cout << std::fixed << "Time to process a range of " << l.size() << " elements with list: " << double(end - start) / CLOCKS_PER_SEC << " s" << std::endl;

    return 0;
}