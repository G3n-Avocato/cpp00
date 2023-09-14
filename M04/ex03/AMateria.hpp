/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:29:40 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/15 00:15:05 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter; //declaraction pour empecher conflit appel des deux class 

class	AMateria {
	
	protected:
		std::string _type;
	
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		AMateria&	operator=(AMateria const &rhs);
		~AMateria(void);

		void	setType(std::string const &type);
		std::string const & getType() const; //Returns the materia type
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
