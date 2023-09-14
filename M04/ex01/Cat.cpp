/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:31:58 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/11 18:38:32 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal (src) {
	std::cout << "Copy constructor Cat called" << std::endl;
	this->_brain = new Brain(*src.getBrain());
}

Cat&	Cat::operator=(Cat const &rhs) {
	std::string	*id;

	if (this != &rhs) {
		this->_type = rhs._type;
		delete this->_brain ;
		this->_brain = new Brain();
		id = rhs.getIdeas();
		this->_brain->setIdeas(id);
	}
	return (*this);
}

Cat::~Cat(void) {
	delete	_brain;
	std::cout << "Destructor Cat called" << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return (this->_brain);
}

void	Cat::makeSound(void) const {
	std::cout << ".. Meow ... meow ...rrrrrrrrh .. meow." << std::endl; 
}

std::string	Cat::getType() const {
	return (this->_type);
}

void	Cat::setIdeas(std::string *id) {
	this->_brain->setIdeas(id);
}

std::string	*Cat::getIdeas(void) const {
	return (this->_brain->getIdeas());
}
