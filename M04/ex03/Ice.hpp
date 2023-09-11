/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:55:27 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/11 22:25:17 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>

class Ice {
	
	public:
		Ice();
		Ice(Ice const &src);
		Ice&	operator=(Ice const &rhs);
		~Ice(void);
		
		Ice*	clone(void) const;
		void	use(ICharacter&);
	private:
		static std::string	_type;
};

#endif
