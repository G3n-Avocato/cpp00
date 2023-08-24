/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:31:58 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/24 14:03:19 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal() {
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
	_brain = new Brain();
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
	delete	_brain;
}

void	Cat::makeSound(void) const {
	std::cout << ".. Meow ... meow ...rrrrrrrrh .. meow." << std::endl; 
}

std::string	Cat::getType() const {
	return (this->_type);
}

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
