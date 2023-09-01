/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:03:20 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/01 17:04:21 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "Default constructor WrongAnimal called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Ribbit .... Ribbit ..... plouf !" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}
