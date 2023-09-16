/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:25:30 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/16 23:23:58 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++) 
		this->_learnM[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
	*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs) {
	if (this != &rhs) {
		for (int i = 0; this->_learnM[i]; i++)
			delete this->_learnM[i];
		for (int i = 0; i < 4; i++)
			this->_learnM[i] = rhs._learnM[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; this->_learnM[i]; i++)
		delete this->_learnM[i];
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
		while (this->_learnM[i])
			i++;
		i -= 1;
		while (i >= 0 && type != this->_learnM[i]->getType())
			i--;
		AMateria*	tmp(this->_learnM[i]);
		return (tmp);
	}
	return (0);
}
