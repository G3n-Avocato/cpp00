/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:55:27 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/16 18:43:23 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice: public AMateria {
	
	public:
		Ice(void);
		Ice(Ice const &src);
		Ice&	operator=(Ice const &rhs);
		~Ice(void);
	
		Ice*	clone(void) const;
		void	use(ICharacter& target);
	
	private:
		static std::string	_type;
};

#endif
