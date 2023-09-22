/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:01:52 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/16 18:43:59 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "Character.hpp"

class Cure: public AMateria {
	
	public:
		Cure(void);
		Cure(Cure const &src);
		Cure&	operator=(Cure const &rhs);
		~Cure(void);

		Cure*	clone(void) const;
		void	use(ICharacter& target);
	
	private:
		static std::string	_type;
};

#endif
