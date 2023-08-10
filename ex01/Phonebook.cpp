/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:29:58 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/10 15:50:52 by lamasson         ###   ########.fr       */
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
	std::cout << "Goodbye, the phone book will be destroyed." << std::endl;
	return ;
}

int		PhoneBook::getnbcont(void) const {
	return (this->_nbcont);
}

void	PhoneBook::setnbcont(int n) {
	this->_nbcont += n;
	return ;
}

void	PhoneBook::add(void) {
	int			i;

	i = getnbcont();
	if (i < 8)
	{
		std::cout << "complete to save new contact :" << std::endl;

		setnbcont(1);
	}
	else {
	
	}

}
