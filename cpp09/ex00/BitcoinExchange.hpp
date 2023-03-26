/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:10:34 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/24 12:24:42 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <sstream>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>

class BitcoinExchange
{
private:
    std::map<int, double>    dataMap;
public:
    BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &copy);
    BitcoinExchange &operator=(BitcoinExchange const &copy);
    ~BitcoinExchange();

    void    write(char *str, double val);
    void    findValues();
    void    doo(int argc, char **argv);
    void    checkDate(char *str, char *val);

    int     dateToInt(std::string str);
};