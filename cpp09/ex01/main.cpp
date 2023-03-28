/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:19:17 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/28 18:09:41 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

int main(int argc, char* argv[]) {
    if (argc == 2) 
        std::cout << evaluate_rpn(argv[1]) << std::endl;
    else 
    {
        std::cout << "Error: invalid number of arguments" << std::endl;
        return 1;
    }
    return 0;
}