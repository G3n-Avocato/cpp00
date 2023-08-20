/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:23:57 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/20 21:45:14 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		FragTrap& operator=(FragTrap const &rhs);
		~FragTrap(void);

		void	hightFivesGuys(void);

	private:
		std::string	_name;
};

#endif
