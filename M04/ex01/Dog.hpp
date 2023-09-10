/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:05:24 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/10 18:04:34 by lamasson         ###   ########.fr       */
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
		virtual ~Dog(void);

		virtual void		makeSound(void) const;
		std::string			getType(void) const;	
		void				setIdeas(std::string *id);
		std::string			*getIdeas(void) const;
		Brain				*getBrain(void) const;

	private:
		Brain*	_brain;
};

#endif
