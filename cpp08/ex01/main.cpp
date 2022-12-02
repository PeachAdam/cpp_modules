/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:30:31 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/30 15:39:28 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

int main( void ) {
    Span s(10);
    s.addNumber(1);
    s.addNumber(1);
    s.addNumber(1);
    s.addNumber(1);
    s.addNumber(1);
    s.addNumber(3);
    s.addNumber(1);
    s.addNumber(1);
    s.addNumber(1);
    s.addNumber(1);
    std::cout << "shortestSpan: " << s.shortestSpan() << std::endl; // this should print 1
    std::cout << "longestSpan: " << s.longestSpan() << std::endl;   // this should print 19
    try {
        s.addNumber(11);
    }
    catch (std::exception & e) { // Full Span exception should be thrown here
        std::cout << e.what() << std::endl;
    }
    try {
        Span s2(10);
        s2.addNumber(69);
        s2.shortestSpan();
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl; // Empty Span exception should be thrown here
    }

	std::list<int>	l;
	srand(time(0));
	for (int i = 0; i < 1000; i++)
		l.push_back(rand());

	Span span(l.size());

	span.addNumber(l.begin(), l.end());
	try
	{
		span.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << span.longestSpan() << std::endl;
}