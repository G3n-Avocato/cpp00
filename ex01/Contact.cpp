/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:11:58 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/11 19:38:15 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){
}

void	Contact::eraser_old_contact(void) {
	this->_first_name.clear();
	this->_last_name.clear();
	this->_nickname.clear();
	this->_phone_number.clear();
	this->_darkest_secret.clear();
}

void	Contact::add_new_contact(void) {
	this->first_name();
	this->last_name();
	this->nickname();
	this->phone_number();
	this->darkest_secret();
}

void	Contact::first_name(void) {
	while (this->_first_name.empty())
	{
		std::cout << "first_name : ";
		std::cin >> this->_first_name;
	}
}

void	Contact::last_name(void) {
	while (this->_last_name.empty())
	{
		std::cout << "last name : ";
		std::cin >> this->_last_name;
	}
}

void	Contact::nickname(void) {
	while (this->_nickname.empty())
	{
		std::cout << "nickname : ";
		std::cin >> this->_nickname;
	}
}

void	Contact::phone_number(void) {
	while (this->_phone_number.empty())
	{
		std::cout << "phone number : ";
		std::cin >> this->_phone_number;
	} 
}

void	Contact::darkest_secret(void) {
	while (this->_darkest_secret.empty())
	{
		std::cout << "darkest secret : ";
		std::cin >> this->_darkest_secret;
	}
}

std::string Contact::return_first_name(void) {
	std::string	tmp;

	if (this->_first_name.length() > 10)
	{
		tmp = this->_first_name.substr(0, 10);
		tmp.replace(9, 1, ".");
		return (tmp);
	}
	return (this->_first_name);
}

std::string Contact::return_last_name(void) {
	std::string	tmp;

	if (this->_last_name.length() > 10)
	{
		tmp = this->_last_name.substr(0, 10);
		tmp.replace(9, 1, ".");
		return (tmp);
	}
	return (this->_last_name);
}

std::string Contact::return_nickname(void) {
	std::string	tmp;

	if (this->_nickname.length() > 10)
	{
		tmp = this->_nickname.substr(0, 10);
		tmp.replace(9, 1, ".");
		return (tmp);
	}
	return (this->_nickname);
}

void	Contact::print_contact(int i) {
	std::cout << std::setw(10) << i << "|";
	std::cout << std::setw(10) << return_first_name() << "|";
	std::cout << std::setw(10) << return_last_name() << "|";
	std::cout << std::setw(10) << return_nickname() << std::endl;
}
