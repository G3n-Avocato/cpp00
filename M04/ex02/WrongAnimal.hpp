/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:01:49 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/10 18:59:37 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal {

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal& operator=(WrongAnimal const &rhs);
		virtual ~WrongAnimal(void);

		void		makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif
