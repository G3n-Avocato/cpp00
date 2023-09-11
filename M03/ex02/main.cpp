/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/09 17:03:37 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	
	ClapTrap	clap("Robert");
	ScavTrap	scav("Boby le portier");
	FragTrap	frag("Etalon du cul");
	FragTrap	trap(frag);

	std::cout << std::endl;
	scav.guardGate();
	clap.attack("Boby le portier");
	scav.takeDamage(50);

	std::cout << std::endl;
	frag.attack("Robert");
	clap.beRepaired(1);
	std::cout << std::endl;
	
	scav.attack("Po et Etalon du cul");
	std::cout << "Egalement appelé Po model deffectueux de ";
	frag.takeDamage(10);
	trap.takeDamage(10);
	frag.beRepaired(5);
	frag.hightFivesGuys();
	std::cout << "Egalement appelé Po model deffectueux de ";
	trap.hightFivesGuys();
	trap.beRepaired(2);
	std::cout << std::endl;
	return (0);
}
