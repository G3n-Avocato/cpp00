/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:00:11 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/24 12:39:49 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal {

	public:
		Animal(void);
		Animal(Animal const &src);
		Animal&	operator=(Animal const &rhs);
		virtual ~Animal(void);

		virtual void		makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string	_type;
};

class	WrongAnimal {

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal& operator=(WrongAnimal const &rhs);
		virtual ~WrongAnimal(void);

		void	makeSound(void) const; //virtual devant void pour permettre a override de prendre le dessus
		std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif
