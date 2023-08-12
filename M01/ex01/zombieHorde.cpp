/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:17:04 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/12 21:42:07 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int		i = 0;
	Zombie	*horde = new Zombie[N];

	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return (horde);
}
