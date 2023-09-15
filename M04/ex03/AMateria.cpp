/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:50:07 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/15 23:38:31 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	this->_type = "";
}

AMateria::AMateria(std::string const & type) {
	this->_type = type;
}

AMateria::AMateria(AMateria const &src) {
	*this = src;
}

AMateria	&AMateria::operator=(const AMateria &rhs) {
	if (this != &rhs) 
		this->_type = rhs._type;
	return (*this);
}

AMateria::~AMateria(void) {
}

std::string const& AMateria::getType(void) const {
	return (this->_type);
}

void	AMateria::use(ICharacter &target) {
	(void) target;
}
