/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 01:12:57 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/30 13:54:25 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <exception>

class Span
{
private:
	std::list<int>	data_list;
	unsigned int	list_limit;

	Span();

public:
	Span(unsigned int);
	Span(const Span &);
	~Span();
	Span &operator=(const Span &);

	void				addNumber(int);
	unsigned int		shortestSpan(void) const;
	unsigned int		longestSpan(void) const;
	void				addNumber(std::list<int>::iterator, std::list<int>::iterator);

	class LimitExceeded : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class NoSpanCanBeFound : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif