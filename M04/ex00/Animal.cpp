/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:01:26 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/01 17:04:27 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Default constructor Animal called" << std::endl;
	this->_type = "Mammal";
}

Animal::Animal(Animal const &src) {
	std::cout << "Copy constructor Animal called" << std::endl;
	*this = src;
}

Animal	&Animal::operator=(const Animal &rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

Animal::~Animal(void) {
	std::cout << "Destructor Animal called" << std::endl;
}

void	Animal::makeSound(void) const {
	std::cout << ".... Dark howl..." << std::endl;
}

std::string	Animal::getType() const {
	return (this->_type);
}
