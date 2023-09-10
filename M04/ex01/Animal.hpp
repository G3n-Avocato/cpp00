/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:00:11 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/10 18:04:42 by lamasson         ###   ########.fr       */
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
		std::string			getType(void) const;

	protected:
		std::string	_type;
};

#endif
