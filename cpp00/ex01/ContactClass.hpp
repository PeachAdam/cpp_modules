/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:53:05 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/23 14:42:36 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

#include <string>
#include <iostream>

class Contact
{
    private:
        std::string firstname, lastname, nickname, phoneNumber, darkestSecret;

    public:
        void printVariables(void);
        void search(int index);
        void setFirstname(std::string std_name);
        void setLastname(std::string std_last);
        void setNickname(std::string std_nick);
        void setPhonenumber(std::string std_number);
        void setDarkestsecret(std::string std_secret);
        std::string returnFirstname(void);
        std::string returnLastname(void);
        std::string returnNickname(void);
        std::string returnPhonenumber(void);
        std::string returnDarkestsecret(void);
};


#endif