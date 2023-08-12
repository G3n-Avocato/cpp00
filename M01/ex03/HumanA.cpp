/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:34:46 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/13 00:09:45 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _weapon(type) {
	this->_name = name;
}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
