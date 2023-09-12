/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:56:30 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/12 22:00:42 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

std::string	Cure::_type = "cure";

Cure::Cure() {

}

Cure::Cure(Cure const &src) {

}

Cure&	Cure::operator=(const Cure &rhs) {

}

Cure::~Cure() {

}

Cure*	Cure::clone(void) const {
	Cure	*tmp = new Cure();
	return (tmp);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target << "’s wounds *" << std::endl;
}
