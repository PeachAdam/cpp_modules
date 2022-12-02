/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:43:08 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/01 15:00:09 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
    int                 m_integer;
    static const int    m_octet = 8;

    public:
    Fixed();
    Fixed(const Fixed &);
    Fixed &operator=(const Fixed &);

    Fixed(const int);
	Fixed(const float);
    
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &, Fixed const &);

#endif
