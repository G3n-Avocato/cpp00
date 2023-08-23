/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/23 17:37:28 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	
	ScavTrap	scav("Boby le portier");
	FragTrap	frag("Etalon du cul");
	DiamondTrap	Dia("Dios");

	scav.guardGate();
	frag.attack("Dios");
	Dia.takeDamage(30);
	scav.attack("Etalon du cul");
	frag.takeDamage(20);
	frag.beRepaired(15);
	frag.hightFivesGuys();
	Dia.attack("Etalon du cul");
	Dia.whoAmI();
	Dia.hightFivesGuys();
	return (0);
}
