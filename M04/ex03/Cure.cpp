/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:56:30 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/11 22:31:21 by lamasson         ###   ########.fr       */
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

}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target << "’s wounds *" << std::endl;
}
