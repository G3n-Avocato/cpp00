/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:54:48 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/10 18:04:56 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		WrongCat&	operator=(WrongCat const &rhs);
		~WrongCat(void);

		void		makeSound(void) const;
		std::string	getType(void) const;
};
 
#endif
