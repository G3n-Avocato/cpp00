/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/09 16:33:58 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	
	ClapTrap	clap("Robert");
	ScavTrap	scav("Boby le portier");
	ScavTrap	trap(scav);

	std::cout << std::endl;
	clap.attack("Boby le portier");
	scav.guardGate();

	std::cout << std::endl;
	scav.attack("Robert");
	clap.takeDamage(20);
	clap.beRepaired(1);
	
	std::cout << std::endl;
	std::cout << "Le jumeau malefique de ";
	trap.attack("Boby le portier");
	std::cout << "Le ScavTrap qui est aussi ";
	scav.takeDamage(20);
	scav.beRepaired(5);
	std::cout << "Le jumeau malefique de ";
	trap.beRepaired(1);
	std::cout << std::endl;
	return (0);
}
