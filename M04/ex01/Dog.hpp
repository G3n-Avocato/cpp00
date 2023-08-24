/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:05:24 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/24 14:02:41 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {

	public:
		Dog(void);
		Dog(Dog const &src);
		Dog&	operator=(Dog const &rhs);
		~Dog(void) override;

		void		makeSound(void) const override;
		std::string	getType(void) const;

	private:
		Brain*	_brain;
};

#endif
