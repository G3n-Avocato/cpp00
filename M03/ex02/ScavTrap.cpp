/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:49:32 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/09 16:49:36 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Default constructor ScavTrap called" << std::endl;
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = src;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		this->_EnergyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_AttackDamage << " points of damage !" << std::endl;
	}
	else {
		std::cout << "ScavTrap " << this->_name;
		if (this->_EnergyPoints == 0)
			std::cout << " has no more energy points !";
		else
			std::cout << " has no more life points !";
		std::cout << " can't attacks " << target << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " : Gatekeeper mode actived." << std::endl;
}
