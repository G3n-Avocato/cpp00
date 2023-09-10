/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:37:32 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/10 18:04:14 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {

	public:
		Cat(void);
		Cat(Cat const &src);
		Cat&	operator=(Cat const &rhs);
		~Cat(void);

		virtual void		makeSound(void) const;
		std::string			getType(void) const;
		Brain				*getBrain(void) const;
		void				setIdeas(std::string *id);
		std::string			*getIdeas(void) const ;

	private:
		Brain*	_brain;
		
};

#endif
