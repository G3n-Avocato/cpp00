/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:12:54 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/13 17:28:35 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource& operator=(MateriaSource const &rhs);
		~MateriaSource();

		void	learnMateria(AMateria* m);
		AMateria* createMateria(std::string const &type);

	private:
		AMateria*	_learnM[4];
};

#endif
