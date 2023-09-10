/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:05:24 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/10 17:57:37 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal {

	public:
		Dog(void);
		Dog(Dog const &src);
		Dog&	operator=(Dog const &rhs);
		virtual ~Dog(void);

		virtual void		makeSound(void) const;
		std::string	getType(void) const;
	
};

#endif
