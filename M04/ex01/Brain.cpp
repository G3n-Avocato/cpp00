/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:59:32 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/10 20:08:27 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Default constructor Brain called" << std::endl;
}

Brain::Brain(Brain const &src) {
	std::cout << "Copy constructor Brain called" << std::endl;
	*this = src;
}

Brain&	Brain::operator=(const Brain &rhs) {
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Destructor Brain called" << std::endl;
}

void	Brain::setIdeas(std::string *id) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = id[i];
}

std::string	*Brain::getIdeas(void) const {
	std::string *id = new std::string[100];

	for (int i = 0; i < 100; i++)
		id[i] = this->_ideas[i];
	return (id);
}
