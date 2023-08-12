/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:23:36 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/13 00:00:01 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {

	public:

		HumanB(std::string name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon &type);

	private:

		std::string	_name;
		Weapon		*_weapon;
};

#endif
