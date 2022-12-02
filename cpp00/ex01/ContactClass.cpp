/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:20:59 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/23 14:51:59 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

void Contact::printVariables(void){
    
    std::cout << this->firstname << std::endl;
    std::cout << this->lastname << std::endl;
    std::cout << this->nickname << std::endl;
    std::cout << this->phoneNumber << std::endl;
    std::cout << this->darkestSecret << std::endl;
}

void Contact::setFirstname(std::string std_name){
    this->firstname = std_name;
}

void Contact::setLastname(std::string std_last){
    this->lastname = std_last;
}

void Contact::setNickname(std::string std_nick){
    this->nickname = std_nick;
}

void Contact::setPhonenumber(std::string std_number){
    this->phoneNumber = std_number;
}

void Contact::setDarkestsecret(std::string std_secret){
    this->darkestSecret = std_secret;
}

std::string Contact::returnFirstname(void){
    return this->firstname;
}

std::string Contact::returnLastname(void){
    return this->lastname;
}

std::string Contact::returnNickname(void){
    return this->nickname;
}

std::string Contact::returnPhonenumber(void){
    return this->phoneNumber;
}

std::string Contact::returnDarkestsecret(void){
    return this->darkestSecret;
}

void	Contact::search(int index)
{
	std::cout<<"|         "<<std::to_string(index)<<"|";
    for(int j = 0; j < (10 - (int)this->firstname.length()); j++)
			std::cout<<" ";
    if (this->firstname.length() > 10)
			std::cout<<this->firstname.substr(0, 9)<<".";
    else
			std::cout<<this->firstname;
    std::cout<<"|";
    for(int j = 0; j < (10 - (int)this->lastname.length()); j++)
			std::cout<<" ";
    if (this->lastname.length() > 10)
			std::cout<<this->lastname.substr(0, 9)<<".";
    else
			std::cout<<this->lastname;
    std::cout<<"|";
    for(int j = 0; j < (10 - (int)this->nickname.length()); j++)
			std::cout<<" ";
    if (this->nickname.length() > 10)
			std::cout<<this->nickname.substr(0, 9)<<".";
    else
			std::cout<<this->nickname;
    std::cout<<"|"<<std::endl;
}