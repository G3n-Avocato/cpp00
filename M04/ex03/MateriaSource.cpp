/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:25:30 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/19 18:08:49 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++) 
		this->_learnM[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
	for (int i = 0; i < 4; i++)
		this->_learnM[i] = NULL;
	*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			if (this->_learnM[i])
				delete this->_learnM[i];
		}
		for (int i = 0; i < 4; i++) {
			if (rhs._learnM[i])
				this->_learnM[i] = rhs._learnM[i]->clone();
			else
				this->_learnM[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		if (this->_learnM[i])
			delete this->_learnM[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m) {
	int	i = 0;

	while (this->_learnM[i])
		i++;
	if (i < 4)
		this->_learnM[i] = m;
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	if (type == "cure" || type == "ice") {
		int i = 0;
		while (i < 4 && this->_learnM[i])
			i++;
		i-= 1;
		while (i >= 0 && type != this->_learnM[i]->getType())
			i--;
		return (this->_learnM[i]->clone());
	}
	return (0);
}
