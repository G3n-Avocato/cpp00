/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:44:06 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/20 20:09:54 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {

	public :
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		ScavTrap&	operator=(ScavTrap const &rhs);
		~ScavTrap(void);

		virtual void	attack(const std::string& target);
		void	guardGate(void);

	private :
		std::string	_name;
};

#endif
