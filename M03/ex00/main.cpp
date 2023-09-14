/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:36:19 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/14 20:47:31 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {

	{
	std::cout << "----- TEST 1 -----" << std::endl;
	std::cout << std::endl;
	
	ClapTrap	clap("Robert");
	std::cout << std::endl;
	ClapTrap	trap("Jo");
	ClapTrap	eymi(trap);

	std::cout << std::endl;
	clap.attack("Jo");
	eymi.takeDamage(2);	
	
	std::cout << std::endl;
	eymi.beRepaired(0);
	std::cout << std::endl;
	trap.beRepaired(1);

	std::cout << std::endl;
	eymi.attack("Robert");
	clap.takeDamage(10);
	clap.beRepaired(1);
	
	std::cout << std::endl;
	eymi.attack("Robert");
	clap.takeDamage(10);
	
	std::cout << std::endl;
	eymi.beRepaired(1);
	trap.beRepaired(0);
	
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 2 -----" << std::endl;
	std::cout << std::endl;
	ClapTrap	clap;

	std::cout << std::endl;
	clap.attack("nobody");
	std::cout << std::endl;
	clap.takeDamage(0);
	std::cout << std::endl;
	clap.beRepaired(0);
	
	std::cout << std::endl;
	}
	return (0);
}
