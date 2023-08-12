/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:13:33 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/12 20:09:51 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie {

	public:
		
		Zombie(std::string name);
		~Zombie(void);
	
		void	announce(void);
	
	private:

		std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
