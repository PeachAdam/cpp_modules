/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dataBase.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:10:34 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/18 15:32:42 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <sstream>
#include <map>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>

class dataBase
{
private:
    std::map<int, double>    dataMap;
public:
    dataBase();
    dataBase(dataBase const &copy);
    dataBase &operator=(dataBase const &copy);
    ~dataBase();

    void    write(char *str, double val);
    void    findValues();
    void    doo(int argc, char **argv);
    void    checkDate(char *str, char *val);

    int     dateToInt(std::string str);
};