/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:01:52 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/11 22:27:25 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include<iostream>

class Cure {
	
	public:
		Cure();
		Cure(Cure const &src);
		Cure&	operator=(Cure const &rhs);
		~Cure();

		Cure*	clone(void) const;
		void	use(ICharacter&);
	private:
		static std::string	_type;
};

#endif
