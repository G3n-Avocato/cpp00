/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:22:25 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/01 19:34:02 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Default constructor Dog called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &src) : Animal(src) {
	std::cout << "Copy constructor Dog called" << std::endl;
	this->_brain = new Brain(*src.getBrain());
}

Dog&	Dog::operator=(const Dog &rhs) {
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

Dog::~Dog(void) {
	delete _brain;
	std::cout << "Destructor Dog called" << std::endl;
}

Brain	*Dog::getBrain(void) const {
	return (this->_brain);
}

void	Dog::makeSound(void) const {
	std::cout << "Bark !! Bark ! Bark, Bark !!!" << std::endl;
}

std::string	Dog::getType(void) const {
	return (this->_type);
}

void	Dog::setIdeas(std::string *id) {
	this->_brain->setIdeas(id);
}

std::string	*Dog::getIdeas(void) const {
	return (this->_brain->getIdeas());
}
