/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:13:33 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/12 21:43:00 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

	public:
		
		Zombie();
		~Zombie(void);
	
		void	announce(void);
		void	set_name(std::string name);
	
	private:

		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
