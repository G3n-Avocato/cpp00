/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:22:49 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/12 23:44:04 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string *name) {
	this->_name = name;
}

Character::Character(Character const &src) {

}

Character&	Character::operator=(const Character &rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		delete [] this->_items;	
	}
}

Character::~Character(void) {
	
	//for (int i = 0; this->_stock[i]; i++)
	//	delete this->_stock[i] ;
	//delete [] this->_stock ;
}

std::string const& Character::getName(void) const {
	return (*this->_name);
}

void	Character::equip(AMateria *m) {
	int	i = 0;
	
	while (this->_items[i])
		i++;
	if (i < 4)
		this->_items[i] = m;
}

void	Character::unequip(int idx) {
	int	i = 0;

	while (this->_stock[i])
		i++;
	if (this->_items[idx]) {
		this->_stock[i] = this->_items[idx];
		this->_items[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (this->_items[idx])
		this->_items[idx]->use(target);
}
