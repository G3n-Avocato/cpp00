/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:47:13 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/14 22:19:21 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "Default constructor DiamondTrap called" << std::endl;
	this->_name = "default";
	this->_HitPoints = 0;
	this->_EnergyPoints = 0;
	this->_AttackDamage = 0;
	this->_ClapName = "default_clap_name";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << "Init constructor DiamondTrap called" << std::endl;
	this->_name = name;
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	this->_ClapName = name + "_clap_name";
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), ScavTrap(src), FragTrap(src) {
	std::cout << "Copy constructor DiamondTrap called" << std::endl;
	*this = src;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
		this->_ClapName = rhs._ClapName;
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
	std::cout << "And this is ... " << this->_ClapName << " !!" << std::endl;
}
