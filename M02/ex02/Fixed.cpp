/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:43:10 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/18 00:59:56 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int		Fixed::_bits = 8;

Fixed::Fixed(void) {
	this->_val = 0;
}

Fixed::Fixed(int const cst) {
	this->_val = cst << _bits;
}

Fixed::Fixed(float const cst) {
	this->_val = roundf(cst * (1 << _bits));
}	

Fixed::Fixed(Fixed const &src) {
	*this = src; 
}

Fixed::~Fixed(void) {
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
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

bool	Fixed::operator>(Fixed const &rhs) const {
	return (this->_val > rhs._val);
}

bool	Fixed::operator<(Fixed const &rhs) const {
	return (this->_val < rhs._val);
}

bool	Fixed::operator>=(Fixed const &rhs) const {
	return (this->_val >= rhs._val);
}

bool	Fixed::operator<=(Fixed const &rhs) const {
	return (this->_val <= rhs._val);
}

bool	Fixed::operator==(Fixed const &rhs) const {
	return (this->_val == rhs._val);
}

bool	Fixed::operator!=(Fixed const &rhs) const {
	return (this->_val != rhs._val);
}

Fixed	Fixed::operator+(Fixed const &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed&	Fixed::operator++(void) {
	_val++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	_val++;
	return (tmp);
}

Fixed&	Fixed::operator--(void) {
	_val--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	_val--;
	return (tmp);
}

const Fixed&	Fixed::min(const Fixed &rhs, const Fixed &other) {
	if (rhs >= other)
		return (other);
	return (rhs);
}

Fixed&	Fixed::min(Fixed &rhs, Fixed &other) {
	if (rhs >= other)
		return (other);
	return (rhs);
}

const Fixed&	Fixed::max(const Fixed &rhs, const Fixed &other) {
	if (rhs <= other)
		return (other);
	return (rhs);
}

Fixed& Fixed::max(Fixed &rhs, Fixed &other) { //pA besoin & normalement //tester
	if (rhs <= other)
		return (other);
	return (rhs);
}
