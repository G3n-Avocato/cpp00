/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/14 22:25:55 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	
	{
	std::cout << std::endl;
	std::cout << "----- TEST 1 -----" << std::endl;
	std::cout << std::endl;
	ScavTrap	scav("Boby le portier");
	std::cout << std::endl;
	FragTrap	frag("Etalon du cul");
	std::cout << std::endl;
	DiamondTrap	Dia("Dios");

	std::cout << std::endl;
	scav.guardGate();
	std::cout << std::endl;
	scav.attack("Dios");
	std::cout << std::endl;
	Dia.takeDamage(20);

	std::cout << std::endl;
	scav.attack("Etalon du cul");
	std::cout << std::endl;
	frag.takeDamage(20);
	std::cout << std::endl;
	frag.beRepaired(15);
	std::cout << std::endl;
	frag.hightFivesGuys();
	
	std::cout << std::endl;
	Dia.attack("Etalon du cul");
	std::cout << std::endl;
	Dia.whoAmI();
	std::cout << std::endl;
	Dia.hightFivesGuys();
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 2 -----" << std::endl;
	std::cout << std::endl;
	
	DiamondTrap Mo("Mojave");
	std::cout << std::endl;
	DiamondTrap	trap(Mo);

	std::cout << std::endl;
	Mo.whoAmI();
	std::cout << std::endl;
	trap.whoAmI();
	std::cout << std::endl;
	trap.attack("Mo");
	std::cout << std::endl;
	Mo.takeDamage(30);
	std::cout << std::endl;
	Mo.attack("Mo_trap");
	std::cout << std::endl;
	trap.takeDamage(30);
	std::cout << std::endl;

	trap.beRepaired(5);
	std::cout << std::endl;
	trap.hightFivesGuys();
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 3 -----" << std::endl;
	std::cout << std::endl;
	ClapTrap clap;
	std::cout << std::endl;
	ScavTrap scav;
	std::cout << std::endl;
	FragTrap frag;
	std::cout << std::endl;
	DiamondTrap	dia;
	std::cout << std::endl;

	clap.attack("nobody");
	std::cout << std::endl;
	scav.attack("nobody");
	std::cout << std::endl;
	frag.attack("nobody");
	std::cout << std::endl;
	dia.attack("nobody");
	std::cout << std::endl;

	dia.beRepaired(0);
	std::cout << std::endl;
	dia.takeDamage(0);
	std::cout << std::endl;

	dia.hightFivesGuys();
	std::cout << std::endl;
	dia.guardGate();
	std::cout << std::endl;
	dia.whoAmI();
	std::cout << std::endl;
	}
	return (0);
}
