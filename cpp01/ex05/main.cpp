/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:38:52 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/25 15:27:50 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	harl.complain("level");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("info");
	harl.complain("level");
	harl.complain("debug");
}