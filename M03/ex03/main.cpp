/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/09 22:14:45 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	
	{
	std::cout << "----- TEST 1 -----" << std::endl;
	ScavTrap	scav("Boby le portier");
	FragTrap	frag("Etalon du cul");
	DiamondTrap	Dia("Dios");

	std::cout << std::endl;
	scav.guardGate();
	scav.attack("Dios");
	Dia.takeDamage(20);

	std::cout << std::endl;
	scav.attack("Etalon du cul");
	frag.takeDamage(20);
	frag.beRepaired(15);
	frag.hightFivesGuys();
	
	std::cout << std::endl;
	Dia.attack("Etalon du cul");
	Dia.whoAmI();
	Dia.hightFivesGuys();
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 2 -----" << std::endl;
	
	DiamondTrap Mo("Mojave");
	DiamondTrap	trap(Mo);

	std::cout << std::endl;
	Mo.whoAmI();
	std::cout << std::endl;
	trap.whoAmI();
	std::cout << std::endl;
	trap.attack("Mo");
	Mo.takeDamage(30);
	Mo.attack("Mo_trap");
	trap.takeDamage(30);
	std::cout << std::endl;

	trap.beRepaired(5);
	trap.hightFivesGuys();
	std::cout << std::endl;
	}
	return (0);
}
