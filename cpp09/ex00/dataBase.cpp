/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dataBase.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:11:13 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/18 15:32:55 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dataBase.hpp"

dataBase::dataBase()
{
    std::ifstream           dataFile;
    std::pair<int, double>  temp;
    std::string             str;
    double                  val;
    int                     dateVal;
    
    dataFile.open("./data.csv");

    if (!dataFile)
    {
        std::cerr << "Error: Could not open data.csv check the file path.\n";
        exit(EXIT_FAILURE);
    }
    
    //dataFile ı okuyup inputMap in içine koyuyorum
    getline(dataFile,str);
    str = "";
    
    while (dataFile.good())
    {
        dateVal = 0;
        val = 0;
        getline(dataFile,str,',');
        dateVal = dateToInt(str);
        getline(dataFile,str,'\n');
        val = std::atof(str.c_str());
        temp.first = dateVal;
        temp.second = val;
        dataMap.insert(temp);
    }
    dataFile.close();
}

dataBase &dataBase::operator=(dataBase const &copy)
{
    dataMap = copy.dataMap;
    return (*this);
}


dataBase::dataBase(dataBase const &copy)
{
    *this = copy;
}

dataBase::~dataBase()
{
}


int     dataBase::dateToInt(std::string string)
{
    int         ret = 0;
    const char *str = string.c_str();

    //yıl
    ret += (str[0] - 48) * std::pow(10, 7);
    ret += (str[1] - 48) * std::pow(10, 6);
    ret += (str[2] - 48) * std::pow(10, 5);
    ret += (str[3] - 48) * std::pow(10, 4);
    //ay
    ret += (str[5] - 48) * std::pow(10, 3);
    ret += (str[6] - 48) * std::pow(10, 2);
    //gün
    ret += (str[8] - 48) * std::pow(10, 1);
    ret += (str[9] - 48);

    return (ret);
}


void    dataBase::doo(int argc, char **argv)
{
    std::ifstream inputFile;
    
    inputFile.open(argv[1]);
    
    if (argc != 2 || !inputFile)
    {
        std::cerr << "Error: Missing arguman or could not open " << argv[1] << " check the file path." << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string         str;
    char                *str1;
    char                *val_str;

    getline(inputFile, str);
    str = "";
    
    while (inputFile.good())
    {
        getline(inputFile,str, '\n');
        char temp[std::strlen(str.c_str()) + 1];
        std::strcpy(temp, str.c_str());
        str1 = strtok(temp, " | ");
        val_str = strtok(NULL, " | ");
        checkDate(str1, val_str);
    }
    inputFile.close();
}

void    dataBase::checkDate(char *str, char *val_str)
{
    for (int i = 0; str[i]; i++)
    {
        if ((i == 4 && str[4] != '-') || (i == 7 && str[7] != '-'))
        {
            std::cerr << "Error: bad input => " << str << std::endl;
            return ;
        }
    }
    int day = 0;
    int month = 0;
    double val = 0;
    const char *temp = val_str;

    month += str[5] - 48;
    month += str[6] - 48;
    day += str[8] - 48;
    day += str[9] - 48;
    if (day > 31 || month > 12)
    {
        std::cerr << "Error: bad date => " << str << std::endl;
        return ;
    }
    
    if (!val_str)
    {
        std::cerr << "Error: bad input => " << str << std::endl;
        return ;
    }

    val = std::atof(temp);

    if (val > 2147483647)
    {
        std::cerr << "Error: too large a number."<< std::endl;
        return ;
    }

    if (val < 0)
    {
        std::cerr << "Error: not a positive number."<< std::endl;
        return ;
    }
    write(str, val);
}

void dataBase::write(char *str, double val)
{
    int int_date = dateToInt(str);
    std::map<int, double>::iterator it = dataMap.find(int_date);

    while (it->first == 1612)
    {
        int_date--;
        it = dataMap.find(int_date);
    }

    std::cout << str << " => " << val << " = " << it->second * val << std::endl;
}