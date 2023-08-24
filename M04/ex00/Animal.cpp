/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:01:26 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/24 12:34:59 by lamasson         ###   ########.fr       */
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
