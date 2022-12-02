/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:20:44 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/28 14:46:47 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){
    int arr1[] = {10, 11, 12, 13, 14};

    std::cout << "arr1: " << std::endl;
    iter(arr1, 5, &print);
	std::cout << std::endl;
	iter(arr1, 5, &incrementPrint);
	std::cout << std::endl;
	iter(arr1, 5, &decrementPrint);
	std::cout << std::endl;
	std::cout << std::endl;

	float arr5[] = {1.1111f, 2.2222f, 3.3333f, 4.4444f, 5.5555f};
	std::cout << "arr5: " << std::endl;
	iter(arr5, 5, &print);
	std::cout << std::endl;
	iter(arr5, 5, &incrementPrint);
	std::cout << std::endl;
	iter(arr5, 5, &decrementPrint);
	std::cout << std::endl;
	std::cout << std::endl;

    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "arr2: " << std::endl;
    iter(arr2, 5, &print);
	std::cout << std::endl;
	iter(arr2, 5, &incrementPrint);
	std::cout << std::endl;
	iter(arr2, 5, &decrementPrint);
	std::cout << std::endl;
	std::cout << std::endl;

    char arr3[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "arr3: " << std::endl;
    iter(arr3, 5, &print);
	std::cout << std::endl;
	iter(arr3, 5, &incrementPrint);
	std::cout << std::endl;
	iter(arr3, 5, &decrementPrint);
	std::cout << std::endl;
	std::cout << std::endl;

    std::string arr4[] = {"one", "two", "three", "four", "five"};

    std::cout << "arr4: " << std::endl;
    iter(arr4, 5, &print);
	std::cout << std::endl;

    return (0);
}