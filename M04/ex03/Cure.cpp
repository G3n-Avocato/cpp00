/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:56:30 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/13 19:10:04 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

std::string	Cure::_type = "cure";

Cure::Cure() : AMateria(this->_type){
}

Cure::Cure(Cure const &src) : AMateria(src) {
	*this = src;
}

Cure&	Cure::operator=(const Cure &rhs) {
	return (*this);
}

Cure::~Cure(void) {
}

Cure*	Cure::clone(void) const {
	Cure	*tmp = new Cure();
	return (tmp);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << &target << "’s wounds *" << std::endl;
}
