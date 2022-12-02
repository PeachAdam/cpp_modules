/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:12:49 by yaysu             #+#    #+#             */
/*   Updated: 2022/10/23 14:39:23 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"

void	printCommands(void)
{
	std::cout << "Here is a list of all possible commands:" << std::endl;
	std::cout << " * ADD - to add new contact to phonebook." << std::endl;
	std::cout << " * SEARCH - to search through phonebook." << std::endl;
	std::cout << " * EXIT - to exist and wipe all data." << std::endl;
}

void	add(Phonebook *book)
{
	Contact temp;
	std::string cmd;
	
	std::cout << "Enter your first name: ";
	std::cin >> cmd;
	temp.setFirstname(cmd);
	std::cout << "Enter your last name: " ;
	std::cin >> cmd;
	temp.setLastname(cmd);
	std::cout << "Enter your nickname: " ;
	std::cin >> cmd;
	temp.setNickname(cmd);
	std::cout << "Enter your phone number: ";
	std::cin >> cmd;
	temp.setPhonenumber(cmd);
	std::cout << "Enter your darkest secret: ";
	std::cin >> cmd;
	temp.setDarkestsecret(cmd);
	book->addContact(&temp);
}

void	search(Phonebook *book)
{
	book->displayAll();
}

int main(void)
{
	Phonebook book;
	std::string cmd;
	
	std::cout << "Welcome to Phonebook!" << std::endl;
	printCommands();
	while (1)
	{
		std::cout << "Type command: ";
		std::cin >> cmd;

		if (cmd == "EXIT")
			return 0;
		else if (cmd == "HELP")
			printCommands();
		else if (cmd == "ADD")
			add(&book);
		else if (cmd == "SEARCH")
			search(&book);
		else
			std::cout << "Need only command. If don't remember commands print -> HELP" << std::endl;
	}
	return 0;
}