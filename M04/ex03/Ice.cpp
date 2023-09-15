/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:00:22 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/15 16:16:26 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

std::string	Ice::_type = "ice";

Ice::Ice(void) : AMateria(this->_type) {
}

Ice::Ice(Ice const &src) : AMateria(src) {
	*this = src;
}

Ice&	Ice::operator=(const Ice &rhs) {
	if (this != &rhs) {
		;	
	}
	return (*this);
}

Ice::~Ice(void) {
}

Ice*	Ice::clone(void) const {
	Ice		*tmp = new Ice();
	return (tmp);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << &target  << " *" << std::endl;
}
