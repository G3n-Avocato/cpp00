/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:49:41 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/01 16:58:30 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	std::cout << "Default constructor WrongCat called" << std::endl;
	this->_type = "Wrong Cat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {
	std::cout << "Copy Constructor WrongCat called" << std::endl;
	*this = src;
}

WrongCat&	WrongCat::operator=(const WrongCat &rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "Destructor WrongCat called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Meuuuuuuuh .... Mmmmmeeeeuuuuuuuuuhhh !!" << std::endl;
}

std::string	WrongCat::getType() const {
	return (this->_type);
} 
