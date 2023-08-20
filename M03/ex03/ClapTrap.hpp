/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:53:05 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/20 19:22:14 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	public :
		
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap&	operator=(ClapTrap const &rhs);
		~ClapTrap(void);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected :
		std::string				_name;
		unsigned int			_HitPoints;
		unsigned int			_EnergyPoints;
		unsigned int			_AttackDamage;
	
};

#endif
