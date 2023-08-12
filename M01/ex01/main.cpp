/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:25:12 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/12 21:53:51 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie	*horde = zombieHorde(10, "Saucisse");
	
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
