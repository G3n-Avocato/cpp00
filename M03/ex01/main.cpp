/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/20 21:21:08 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	
	ClapTrap	clap("Robert");
	ScavTrap	scav("Boby le portier");

	scav.attack("Robert");
	scav.guardGate();
	clap.attack("Boby le portier");
	scav.beRepaired(5);
	scav.takeDamage(100);
	return (0);
}
