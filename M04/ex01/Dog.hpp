/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:05:24 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/01 18:30:56 by lamasson         ###   ########.fr       */
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
		void	setIdeas(std::string *id);
		std::string *getIdeas(void) const;
		Brain	*getBrain(void) const;

	private:
		Brain*	_brain;
};

#endif
