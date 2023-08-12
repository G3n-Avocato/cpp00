/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:09:39 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/12 23:53:18 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon(void) {
}

std::string const	&Weapon::getType(void) {
	return this->_type;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
