/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputBase.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:10:34 by yaysu             #+#    #+#             */
/*   Updated: 2023/03/14 22:33:33 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <sstream>
#include <vector>

class inputBase
{
private:
    std::vector<std::string> date;
    std::vector<float>      value;
public:
    inputBase(std::string const &);
    ~inputBase();

    void write();
};