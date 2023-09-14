/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/14 21:46:01 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {

	{
	std::cout << std::endl;
	std::cout << "----- TEST 1 -----" << std::endl;
	std::cout << std::endl;
	
	ClapTrap	clap("Robert");
	std::cout << std::endl;
	ScavTrap	scav("Boby le portier");
	std::cout << std::endl;
	FragTrap	frag("Etalon du c**");

	std::cout << std::endl;
	scav.guardGate();
	std::cout << std::endl;
	clap.attack("Boby le portier");
	std::cout << std::endl;
	scav.takeDamage(0);

	std::cout << std::endl;
	frag.attack("Robert");
	std::cout << std::endl;
	clap.takeDamage(30);
	std::cout << std::endl;
	clap.beRepaired(1);
	std::cout << std::endl;
	
	scav.attack("Etalon du c**");
	std::cout << std::endl;
	frag.takeDamage(20);
	std::cout << std::endl;
	frag.beRepaired(5);
	std::cout << std::endl;
	frag.hightFivesGuys();
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 2 -----" << std::endl;
	std::cout << std::endl;
	ClapTrap clap;
	std::cout << std::endl;
	ScavTrap scav;
	std::cout << std::endl;
	FragTrap frag;
	std::cout << std::endl;

	clap.attack("nobody");
	std::cout << std::endl;
	scav.attack("nobody");
	std::cout << std::endl;
	frag.attack("nobody");
	std::cout << std::endl;

	frag.beRepaired(0);
	std::cout << std::endl;
	frag.takeDamage(0);
	std::cout << std::endl;

	frag.hightFivesGuys();
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 3 -----" << std::endl;
	std::cout << std::endl;
	
	ScavTrap	scav("Boby le portier");
	std::cout << std::endl;
	FragTrap	frag("Etalon du c**");
	std::cout << std::endl;
	FragTrap	trap(frag);

	std::cout << std::endl;
	scav.guardGate();
	std::cout << std::endl;
	scav.attack("Etalon du c**");
	std::cout << std::endl;
	trap.takeDamage(20);
	std::cout << std::endl;
	
	trap.attack("Boby le portier");
	scav.takeDamage(30);
	std::cout << std::endl;

	trap.beRepaired(1);
	frag.beRepaired(5);

	std::cout << std::endl;
	frag.hightFivesGuys();
	trap.hightFivesGuys();
	std::cout << std::endl;
	}
	return (0);
}
