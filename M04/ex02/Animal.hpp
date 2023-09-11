/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:00:11 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/11 21:00:43 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	AAnimal {

	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		AAnimal&	operator=(AAnimal const &rhs);
		virtual ~AAnimal(void);

		virtual void		makeSound(void) const = 0;
		std::string			getType(void) const;

	protected:
		std::string	_type;
};

#endif
