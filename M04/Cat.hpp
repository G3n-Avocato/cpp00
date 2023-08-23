/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:37:32 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/23 20:48:49 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal {

	public:
		Cat(void);
		Cat(Cat const &src);
		Cat&	operator=(Cat const &rhs);
		~Cat(void) override;

		void		makeSound(void) const override;
		std::string	getType(void) const;
		
};

#endif
