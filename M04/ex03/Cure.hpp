/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:01:52 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/13 18:56:03 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
	
	public:
		Cure();
		Cure(Cure const &src);
		Cure&	operator=(Cure const &rhs);
		~Cure();

		std::string	static & getType();
		Cure*	clone(void) const;
		void	use(ICharacter& target);
	
	private:
		static std::string	_type;
};

#endif
