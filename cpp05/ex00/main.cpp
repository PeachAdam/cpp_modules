/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaysu <yaysu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:20:05 by yaysu             #+#    #+#             */
/*   Updated: 2022/11/21 18:06:22 by yaysu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    Bureaucrat *bob = new Bureaucrat("Bob", 2);
	try {
		std::cout << "1: " << *bob << std::endl;
		bob->incrementGrade();
		std::cout << "2: " << *bob << std::endl;
		bob->incrementGrade();
		std::cout << "3: " << *bob << std::endl;
		bob->incrementGrade();
		std::cout << "4: " << *bob << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete bob;

	std::cout << std::endl;

	Bureaucrat *jim = new Bureaucrat("Jim", 10);
	try {
		std::cout << "1: " << *jim << std::endl;
		jim->incrementGrade();
		std::cout << "2: " << *jim << std::endl;
		jim->incrementGrade();
		std::cout << "3: " << *jim << std::endl;
		jim->incrementGrade();
		std::cout << "4: " << *jim << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete jim;

	std::cout << std::endl;

	Bureaucrat *luffy = new Bureaucrat("Luffy", 145);
	try {
		std::cout << "1: " << *luffy << std::endl;
		luffy->decrementGrade();
		std::cout << "2: " << *luffy << std::endl;
		luffy->decrementGrade();
		std::cout << "3: " << *luffy << std::endl;
		luffy->decrementGrade();
		std::cout << "4: " << *luffy << std::endl;
		luffy->decrementGrade();
		std::cout << "5: " << *luffy << std::endl;
		luffy->decrementGrade();
		std::cout << "6: " << *luffy << std::endl;
		luffy->decrementGrade();
		std::cout << "7: " << *luffy << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete luffy;

	std::cout << std::endl;

	try {
		Bureaucrat yuno("Yuno", 151);
		std::cout << "HELLO WORLD!!!" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat yuno("Yuno", -1);
		std::cout << "HELLO WORLD!!!" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}