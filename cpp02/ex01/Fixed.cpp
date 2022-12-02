/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:42:55 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/01 14:28:51 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
    :   m_integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int int_arg)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(int_arg << m_octet);
}

Fixed::Fixed(float float_arg)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits((int)roundf(float_arg * (1 << m_octet)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
    m_integer = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    return (m_integer);
}

void Fixed::setRawBits(int raw)
{
    m_integer = raw;
}

int Fixed::toInt(void) const
{
    return (getRawBits() >> m_octet);
}

float Fixed::toFloat(void) const
{
    return((float)getRawBits() / (1 << m_octet));
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return (os);
}