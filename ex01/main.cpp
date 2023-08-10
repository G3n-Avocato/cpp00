/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:36:12 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/10 14:09:07 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
//#include <iostream>
//#include <string>

void	print_error_first_in(void)
{
	std::cout << "Wrong order ..." << std::endl;
	std::cout << "The orders available are :" << std::endl;
	std::cout << "ADD : to save a new contact" << std::endl;
	std::cout << "SEARCH : search contact in the phone book" << std::endl;
	std::cout << "EXIT : leave the phone book" << std::endl;
	return ;
}

void	choose_order(std::string str, PhoneBook instance)
{
	if (str == "ADD")
		instance.add();
	else if (str == "SEARCH")
		instance.search();
	return ;
}

int	main(int argc, char **argv)
{
	PhoneBook	instance;
	std::string	user_in;

	std::cout << "Welcome to the Phonebook !" << std::endl;
	while (1)
	{
		std::cout << "Enter an order : ";
		std::getline(std::cin, user_in);
		std::cout << std::endl;
		if (user_in != "ADD" || user_in != "SEARCH" || user_in != "EXIT")
		{
			print_error_first_in();
			continue ;
		}
		else if (user_in == "EXIT")
			std::cout << "EXIT" << std::endl;
		else
			choose_order(user_in, instance);
	}
	return (0);
}
