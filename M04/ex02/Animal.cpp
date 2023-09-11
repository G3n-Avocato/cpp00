/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:01:26 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/11 21:01:36 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void) {
	std::cout << "Default constructor Animal called" << std::endl;
	this->_type = "Mammal";
}

AAnimal::AAnimal(AAnimal const &src) {
	std::cout << "Copy constructor Animal called" << std::endl;
	*this = src;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

AAnimal::~AAnimal(void) {
	std::cout << "Destructor Animal called" << std::endl;
}

void	AAnimal::makeSound(void) const {
	std::cout << ".... Dark howl..." << std::endl;
}

std::string	AAnimal::getType() const {
	return (this->_type);
}
