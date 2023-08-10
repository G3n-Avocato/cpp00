/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:11:58 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/10 15:43:22 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){
}


void	Contact::add_new_contact(void) {
	this->first_name();
	this->last_name();
	this->nickname();
	this->phone_number();
	this->darkest_secret();
}

void	Contact::first_name(void) {
	do {
		std::cout << "first name : ";
		std::cin >> this->_first_name;
	} while (this->_first_name.empty());
	std::cout << std::endl;
}

void	Contact::last_name(void) {
	do {
		std::cout << "last name : ";
		std::cin >> this->_last_name;
	} while (this->_last_name.empty());
	std::cout << std::endl;
}

void	Contact::nickname(void) {
	do {
		std::cout << "nickname : ";
		std::cin >> this->_nickname;
	} while (this->_nickname.empty());
	std::cout << std::endl;
}

void	Contact::phone_number(void) {
	do {
		std::cout << "phone number : ";
		std::cin >> this->_phone_number;
	} while (this->_phone_number.empty());
	std::cout << std::endl;
}

void	Contact::darkest_secret(void) {
	do {
		std::cout << "darkest secret : ";
		std::cin >> this->_darkest_secret;
	} while (this->_darkest_secret.empty());
	std::cout << std::endl;
}
