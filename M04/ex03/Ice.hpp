/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:55:27 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/13 18:56:24 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
	
	public:
		Ice();
		Ice(Ice const &src);
		Ice&	operator=(Ice const &rhs);
		~Ice(void);
	
		std::string	static & getType();
		Ice*	clone(void) const;
		void	use(ICharacter& target);
	
	private:
		static std::string	_type;
};

#endif
