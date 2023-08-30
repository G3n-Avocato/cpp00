/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:58 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/30 20:59:06 by lamasson         ###   ########.fr       */
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
		if (std::cin.eof())
			return ;
		this->_contacts[i].eraser_old_contact();
		std::cout << "contact deleted ..." << std::endl;
		std::cout << std::endl;
		setoldcont();
		std::cout << "press [Y] to continue adding ..." <<std::endl;
		std::cout << ": ";
		std::cin >> space;
		if (std::cin.eof())
			return ;
		std::cout << std::endl;
	}
	std::cout << "Complete to save new contact :" << std::endl;
	this->_contacts[i].add_new_contact();
	setnbcont();
	std::cout << "New contact added." << std::endl;
}

int		PhoneBook::check_input(std::string index) const {
	size_t	i = 0;

	while (i < index.length())
	{
		if (!std::isdigit(index[i]))
		{
			std::cout << "Bad input index is a digit ..." <<std::endl;
			return (-1);
		}
		if (!(index[i] >= '0' && index[i] <= '7'))
		{
			std::cout << "Bad input only 8 contacts available ..." << std::endl;
			return (0);
		}
		i++;
	}
	return (1);
}

void	PhoneBook::choose_index_contact(void) {
	std::string	index;
	int			i = -1;

	while (index.empty())
	{
		std::cout << std::endl << "Select contact index : ";
		std::getline(std::cin, index);
		if (std::cin.eof())
			return ;
		if (check_input(index) != 1)
			index.clear();
		else {
			i = std::stoi(index);
			if (i >= getnbcont())
			{
				std::cout << "Bad input only " << getnbcont() << " registered contacts" << std::endl;
				index.clear();
			}
		}
	}
	this->_contacts[i].print_data_contact();
}

void	PhoneBook::search(void) {
	int	i = 0;
	
	if (getnbcont() == 0)
	{
		std::cout << "No contact save ..." << std::endl;
		return ;
	}
	else {
		std::cout << std::setw(32) << "... Contact list ..." << std::endl;
		std::cout << std::setw(10) << "index" << "|" << "first name" << "|" << std::setw(10);
		std::cout << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
		while (i < getnbcont())
		{
			this->_contacts[i].print_contact(i);
			i++;
		}
	}
	choose_index_contact();
}

void	PhoneBook::error_setting(void) const {

	std::cout << "Wrong order ..." << std::endl;
	std::cout << std::endl;
	std::cout << "ADD : to save a new contact" << std::endl;
	std::cout << "SEARCH : search contact in the phone book" << std::endl;
	std::cout << "EXIT : leave the phone book" << std::endl;
}

void	PhoneBook::setting_orders(void) {
	std::string	user_in;

	while (1)
	{
		std::cout << std::endl << "... Setting ..." << std::endl;
		std::cout << "Enter an order : ";
		std::getline(std::cin, user_in);
		std::cout << std::endl;
		if (std::cin.eof())
			break ;
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
