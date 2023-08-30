/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:22:25 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/30 23:16:14 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Default constructor Dog called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &src) : Animal(src) {
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = src;
}

Dog&	Dog::operator=(const Dog &rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Destructor Dog called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Bark !! Bark ! Bark, Bark !!!" << std::endl;
}

std::string	Dog::getType() const {
	return (this->_type);
}
