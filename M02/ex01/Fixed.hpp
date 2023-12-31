/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:34:18 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/17 19:37:54 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ostream>

class	Fixed {

	public:
	
		Fixed(void);
		Fixed(int const cst);
		Fixed(float const cst);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed	&operator=(Fixed const &rhs);
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_val;
		static const int	_bits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
