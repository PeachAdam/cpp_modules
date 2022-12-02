/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:52:58 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/23 16:08:16 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"

Phonebook::Phonebook(void)
{
    this->list_size = 0;
}

void Phonebook::addContact(Contact *temp){
    static int i;
    if (i > 7){
        i=0;
    }
    this->list[i] = *temp;
    if (this->list_size != 8)
        this->list_size++;
    std::cout << "Your contact successfully added." << std::endl;
    i++;
}

void Phonebook::displayContacts(int i)
{
    std::cout << this->list[i].returnFirstname() << std::endl;
}

void    Phonebook::displayAll(void)
{
    std::string cmd;
    int i;
    if (this->list_size == 0)
    {
		std::cout<<"# You must add a contact to search #"<<std::endl;
		return;
	}
    std::cout<<"---------------------------------------------"<<std::endl;
	std::cout<<"|     Index|First Name| Last Name|  Nickname|"<<std::endl;
	for (int i = 0; i < this->list_size && i < 8; i++)
	{
		if (this->list_size <= 8)
			this->list[i].search(i + 1);
		else
			this->list[((this->list_size % 8) + i) % 8].search(i + 1);
	}
	std::cout<<"---------------------------------------------"<<std::endl;
	std::cout<<"# Index of the contact you're looking for (0 to exit) #"<<std::endl;
    while (1)
    {
		std::cout << "Type Contact ID: ";
        std::cin >> cmd;
        i = std::atoi(cmd.c_str());
        if (i == 0)
            return ;
        else if (i <= this->list_size && i >= 0)
            displayInfo(i);
        else
            std::cout << "# Bad argument. #"<< std::endl;
    }
}

void Phonebook::displayInfo(int i)
{
	std::cout<<"---------------------------------------------"<<std::endl;
	std::cout<<"# Contact ["<<i<<"] #"<<std::endl;
    std::cout<<"First Name: " << this->list[i - 1].returnFirstname() << std::endl;
    std::cout<<"Last Name: " << this->list[i - 1].returnLastname() << std::endl;
    std::cout<<"Nickname: " << this->list[i - 1].returnNickname() << std::endl;
    std::cout<<"Phone Number: " << this->list[i - 1].returnPhonenumber() << std::endl;
    std::cout<<"Darkest Secret: " << this->list[i - 1].returnDarkestsecret() << std::endl;
	std::cout<<"---------------------------------------------"<<std::endl;
}