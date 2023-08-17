/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:43:10 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/17 19:36:32 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int		Fixed::_bits = 8;

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const cst) {
	std::cout << "Int constructor called" << std::endl;
	this->_val = cst << _bits;
}

Fixed::Fixed(float const cst) {
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(cst * (1 << _bits));
}	

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy construtor called" << std::endl;
	*this = src; 
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_val = rhs.getRawBits();
	return (*this);
}

int	 Fixed::getRawBits(void) const {
	return (this->_val);
}

void	Fixed::setRawBits(int const raw) {
	this->_val = raw;
}

float	Fixed::toFloat(void) const {
	float	Nval = static_cast<float>(this->_val) / (1 << _bits);
	return (Nval);
}

int		Fixed::toInt(void) const {
	int		Nval = this->_val >> _bits;
	return (Nval);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return (o);
}
