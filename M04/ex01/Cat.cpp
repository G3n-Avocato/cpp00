/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:31:58 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/31 00:14:24 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal (src) {
	std::cout << "Copy constructor Cat called" << std::endl;
	this->_brain = src.getBrain();
}

Cat&	Cat::operator=(Cat const &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
		delete this->_brain ;
		this->_brain = rhs.getBrain();
	}
	return (*this);
}

Cat::~Cat(void) {
	delete	_brain;
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << ".. Meow ... meow ...rrrrrrrrh .. meow." << std::endl; 
}

std::string	Cat::getType() const {
	return (this->_type);
}

Brain	*Cat::getBrain(void) const {
	Brain	*get = new Brain();
	get = this->_brain;
	return (get);
}

void	Cat::setIdeas(std::string id) {
	this->_brain->setIdeas(id);
}

std::string	*Cat::getIdeas(void) const {
	return (this->_brain->getIdeas());
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
