/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:26:13 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/14 22:15:59 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "Default constructor FragTrap called" << std::endl;
	this->_name = "default";
	this->_HitPoints = 0;
	this->_EnergyPoints = 0;
	this->_AttackDamage = 0;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Init constructor FlagTrap called" << std::endl;
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
	std::cout << "Copy constructor FlagTrap called" << std::endl;
	*this = src;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "Destructor FlagTrap called" << std::endl;
}

void	FragTrap::hightFivesGuys(void) {
	std::cout << "FlagTrap " << this->_name << " : want a hight five !" << std::endl;
}
