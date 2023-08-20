/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/20 18:34:49 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	
	ClapTrap	clap("Robert");
	ClapTrap	trap("Jo");
	ClapTrap	eymi(trap);

	clap.attack("Jo");
	trap.takeDamage(2);
	eymi.beRepaired(1);
	trap.beRepaired(0);
	clap.attack("eymi");
	eymi.takeDamage(5);
	trap.attack("eymi");
	eymi.takeDamage(6);
	eymi.beRepaired(0);
	eymi.takeDamage(0);
	return (0);
}
