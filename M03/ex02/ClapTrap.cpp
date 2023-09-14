/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:04:49 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/14 21:24:25 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor ClapTrap called" << std::endl;
	this->_name = "default";
	this->_HitPoints = 0;
	this->_EnergyPoints = 0;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Init constructor ClapTrap called" << std::endl;
	this->_name = name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy constructor ClapTrap called" << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor ClapTrap called" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		this->_EnergyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_AttackDamage << " points of damage !" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << this->_name;
		if (this->_EnergyPoints == 0)
			std::cout << " has no more energy points !";
		else
			std::cout << " has no more life points !";
		std::cout << " can't attacks " << target << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_HitPoints > 0) {
		this->_HitPoints = this->_HitPoints - amount;
		if (this->_HitPoints < 0)
			this->_HitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " take " << amount;
		std::cout << " damage, life bar at " << this->_HitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead, he can't take more damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		this->_EnergyPoints--;
		this->_HitPoints = this->_HitPoints + amount;
		std::cout << "ClapTrap " << this->_name << " repairs itself, it gains " << amount;
		std::cout << " life points, life bar at " << this->_HitPoints;
		std::cout << ", Energy Points at " << this->_EnergyPoints << std::endl;
	}
	else {
		std::cout << "ClapTrap " << this->_name; 
		if (this->_EnergyPoints == 0)
			std::cout << " has no more energy points ! ";
		else
			std::cout << " has no more life points ! ";
		std::cout << "Can't repairs itself !" << std::endl;
	}
}
