/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:25:30 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/13 20:05:42 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {

}

MateriaSource::MateriaSource(MateriaSource const &src) {

}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs) {

}

MateriaSource::~MateriaSource(void) {
	delete [] this->_learnM ;
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
		int	i = 0;
		while ( i >= 0 && type == this->_learnM[i]->getType())
			i--;
		AMateria*	tmp(this->_learnM[i]);
		return (tmp);
	}
	return (0);
}
