/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/09 16:44:38 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	
	ClapTrap	clap("Robert");
	ClapTrap	trap("Jo");
	ClapTrap	eymi(trap);

	std::cout << std::endl;
	clap.attack("Jo");
	trap.takeDamage(2);
	
	std::cout << std::endl;
	eymi.beRepaired(0);
	std::cout << std::endl;
	trap.beRepaired(1);

	std::cout << std::endl;
	clap.attack("eymi");
	eymi.takeDamage(4);

	std::cout << std::endl;
	trap.attack("eymi");
	eymi.takeDamage(7);
	eymi.beRepaired(0);
	trap.attack("eymi");
	eymi.takeDamage(0);
	std::cout << std::endl;
	return (0);
}
