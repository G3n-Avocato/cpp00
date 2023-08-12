/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:23:12 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/13 00:03:46 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {

	public:
		
		HumanA(std::string name, Weapon &type);
		~HumanA(void);

		void	attack(void) const;

	private:

		std::string	_name;
		Weapon		&_weapon;
};

#endif
