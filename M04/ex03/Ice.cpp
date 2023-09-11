/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:00:22 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/11 22:29:32 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

std::string	Ice::_type = "ice";

Ice::Ice() {

}

Ice::Ice(Ice const &src) {

}

Ice&	Ice::operator=(const Ice &rhs) {

}

Ice::~Ice(void) {

}

Ice*	Ice::clone(void) const {

}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target  << " *" << std::endl;
}
