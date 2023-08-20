/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/20 22:02:04 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	
	ClapTrap	clap("Robert");
	ScavTrap	scav("Boby le portier");
	FragTrap	frag("Etalon du cul");

	scav.guardGate();
	clap.attack("Boby le portier");
	scav.takeDamage(100);
	frag.attack("Robert");
	scav.attack("Etalon du cul");
	frag.takeDamage(20);
	frag.beRepaired(15);
	frag.hightFivesGuys();
	return (0);
}
