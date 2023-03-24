/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:19:17 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/24 12:31:39 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <stack>
#include "RPN.cpp"

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