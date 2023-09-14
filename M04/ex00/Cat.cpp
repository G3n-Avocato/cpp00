/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:31:58 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/14 22:31:23 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &src) : Animal (src) {
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = src;
}

Cat&	Cat::operator=(Cat const &rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << ".. Meow ... meow ...rrrrrrrrh .. meow." << std::endl; 
}

std::string	Cat::getType() const {
	return (this->_type);
}
