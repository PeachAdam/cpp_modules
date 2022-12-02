/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:42:55 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/01 15:27:52 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
    :   m_integer(0)
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(int int_arg)
{
	setRawBits(int_arg << m_octet);
}

Fixed::Fixed(float float_arg)
{
	setRawBits((int)roundf(float_arg * (1 << m_octet)));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
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

//---------------------------------------------------------------------------------------

bool Fixed::operator>(Fixed const &fixed) const
{
    return(getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<( Fixed const &fixed) const
{
	return (getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=( Fixed const &fixed) const
{
	return (getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=( Fixed const &fixed) const
{
	return (getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==( Fixed const &fixed) const
{
	return (getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=( Fixed const &fixed) const
{
	return (getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(Fixed const &fixed) const
{
	Fixed ret(toFloat() + fixed.toFloat());

	return (ret);
}

Fixed Fixed::operator-(Fixed const &fixed) const
{
	Fixed ret(toFloat() - fixed.toFloat());

	return (ret);
}

Fixed Fixed::operator*(Fixed const &fixed) const
{
	Fixed ret(toFloat() * fixed.toFloat());

	return (ret);
}

Fixed Fixed::operator/(Fixed const &fixed) const
{
	Fixed ret(toFloat() / fixed.toFloat());

	return (ret);
}

Fixed &Fixed::operator++(void)
{
	m_integer += 1;

	return (*this);
}

Fixed &Fixed::operator--(void)
{
	m_integer -= 1;

	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	m_integer += 1;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	m_integer -= 1;
	return (temp);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
	
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}