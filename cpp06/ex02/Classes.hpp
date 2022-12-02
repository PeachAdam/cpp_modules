/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:57:48 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/23 16:22:00 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

class Base
{
public:
	virtual ~Base() {}
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif