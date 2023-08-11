/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:58 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/11 19:41:30 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void) {
	this->_nbcont = 0;
	this->_oldcont = 0;
	std::cout << "Welcome to the Phonebook !" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Goodbye, the Phonebook will be destroyed." << std::endl;
	return ;
}

int		PhoneBook::getnbcont(void) const {
	return (this->_nbcont);
}

void	PhoneBook::setnbcont(void) {
	if (this->_nbcont == 8)
		return ;
	else
		this->_nbcont += 1;
	return ;
}

int		PhoneBook::getoldcont(void) const {
	return (this->_oldcont);
}

void	PhoneBook::setoldcont(void) {
	if (this->_oldcont == 8)
		this->_oldcont = 0;
	else
		this->_oldcont += 1;
	return ;
}

void	PhoneBook::add(void) {
	int			i;
	std::string	space;

	i = getnbcont();
	if (i == 8)
	{
		i = getoldcont();
		std::cout << "too many saved contacts ..." << std::endl;
		std::cout << "press [D] to delete an old contact ..." << std::endl;
		std::cout << ": ";
		std::cin >> space;
		this->contacts[i].eraser_old_contact();
		std::cout << "contact deleted ..." << std::endl;
		std::cout << std::endl;
		setoldcont();
		std::cout << "press [Y] to continue adding ..." <<std::endl;
		std::cout << ": ";
		std::cin >> space;
		std::cout << std::endl;
	}
	std::cout << "Complete to save new contact :" << std::endl;
	this->contacts[i].add_new_contact();
	setnbcont();
	std::cout << "New contact added." << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::search(void) {
	int	i = 0;
	
	if (getnbcont() == 0)
	{
		std::cout << "No contact save ..." << std::endl;
		return ;
	}
	else {
		//ajouter contact : avant affcihage du repertoire
		std::cout << std::setw(10) << "index" << "|" << "first name" << "|" << std::setw(10);
		std::cout << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
		while (i <= getnbcont())
		{
			this->contacts[i].print_contact(i);
			i++;
		}
	}
}

void	PhoneBook::error_setting(void) const {

	std::cout << "Wrong order ..." << std::endl;
	std::cout << std::endl;
	std::cout << "The orders available are :" << std::endl;
	std::cout << "ADD : to save a new contact" << std::endl;
	std::cout << "SEARCH : search contact in the phone book" << std::endl;
	std::cout << "EXIT : leave the phone book" << std::endl;
}

void	PhoneBook::setting_orders(void) {
	std::string	user_in;

	while (1)
	{
		std::cout << "... Setting ..." << std::endl;
		std::cout << "Enter an order : ";
		std::cin >> user_in;
		std::cout << std::endl;
		if (user_in == "ADD")
			add();
		else if (user_in == "SEARCH")
			search();
		else if (user_in == "EXIT")
			return ;
		else
			error_setting();
	}
}
