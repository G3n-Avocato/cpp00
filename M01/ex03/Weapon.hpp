/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:01:45 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/31 19:55:24 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon {

	public:
		
		Weapon(std::string type);
		~Weapon(void);

		std::string const	&getType(void) const;
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif
