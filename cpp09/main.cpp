/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:21:22 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/14 22:06:06 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dataBase.hpp"
#include "inputBase.hpp"

int main(int argc, char **argv)
{
    std::ifstream inputFile;
    
    inputFile.open(argv[1]);

    if (argc != 2 || !inputFile.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    
    inputBase input(argv[1]);

    input.write();
}