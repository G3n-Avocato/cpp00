/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:22:49 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/19 18:08:03 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	this->_name = "default";
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
	this->_ssize = 1;
	this->_stock = NULL;
}

Character::Character(std::string name) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
	this->_ssize = 1;
	this->_stock = NULL;
}

Character::Character(Character const &src) {
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
	this->_stock = NULL;
	this->_ssize = 1;
	*this = src;
}

Character&	Character::operator=(const Character &rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++) {
			if (this->_items[i])
				delete this->_items[i];
		}
		for (int i = 0; i < 4; i++) {
			if (rhs._items[i])
				this->_items[i] = rhs._items[i]->clone();
			else
				this->_items[i] = NULL;
		}
		this->copystock(rhs._stock, rhs._ssize);
		this->_ssize = rhs._ssize;
	}
	return (*this);
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++) {
		if (this->_items[i])
			delete this->_items[i];
	}
	if (this->_stock) {
	for (int i = 0; i < this->_ssize - 1; i++) {
		if (this->_stock[i])
			delete this->_stock[i];
	}
	delete [] this->_stock ;
	}
}

std::string const& Character::getName(void) const {
	return (this->_name);
}

void	Character::equip(AMateria *m) {
	int	i = 0;
	
	while (i < 4 && this->_items[i])
		i++;
	if (i < 4)
		this->_items[i] = m;
	else
		delete m ;
}

void	Character::unequip(int idx) {
	if (this->_items[idx]) {
		this->stock(this->_items[idx]);
		this->_ssize++;
		this->_items[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (this->_items[idx])
		this->_items[idx]->use(target);
}

void	Character::stock(AMateria* m) {
	int	i = 0;
	AMateria **tmp = new AMateria*[this->_ssize];

	while (i < this->_ssize - 1) {
		tmp[i] = this->_stock[i];
		i++;
	}
	tmp[i] = m;
	if (this->_stock)
		delete [] this->_stock ;
	this->_stock = tmp;
}

void	Character::copystock(AMateria **tmp, int len) {
	if (this->_stock) {
		for (int i = 0; i < this->_ssize - 1; i++) {
			if (this->_stock[i])
			delete this->_stock[i] ;
		}
		delete [] this->_stock ;
	}
	this->_stock = new AMateria*[len - 1];
	for (int i = 0; i < len - 1; i++)
		this->_stock[i] = tmp[i]->clone();
}

