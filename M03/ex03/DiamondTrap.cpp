/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:47:13 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/23 17:37:13 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << "Default constructor DiamondTrap called" << std::endl;
	this->_name = name;
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), ScavTrap(src), FragTrap(src) {
	*this = src;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
		}
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "I'm ... " << this->_name << " !" << std::endl;
	std::cout << "And this is ... " << ClapTrap::_name << " !!" << std::endl;
}
