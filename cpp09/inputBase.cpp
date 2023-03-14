/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputBase.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:11:13 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/14 22:30:47 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inputBase.hpp"

inputBase::inputBase(std::string const &arg1)
{
    std::ifstream   file;
    std::string     str;
    
    file.open(arg1);
    getline(file,str);
    
    while (file.good())
    {
        getline(file,str,'|');
        date.push_back(str);
        getline(file,str,'\n');
        value.push_back(atof(str.c_str()));
    }
    
}

inputBase::~inputBase()
{
}

void inputBase::write()
{
    std::vector<std::string>::iterator date_it;
    std::vector<float>::iterator value_it = value.begin();

    for (date_it = date.begin(); date_it != date.end(); date_it++)
    {
        std::cout << *date_it << "," << *value_it << std::endl;
        value_it++;
    }
    
}
