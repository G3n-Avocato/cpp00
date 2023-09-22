/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:35:20 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/18 18:54:12 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Character: public ICharacter {
	
	public:
		Character(void);
		Character(std::string name);
		Character(Character const &src);
		Character&	operator=(const Character &rhs);
		~Character(void);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria*	_items[4];
		AMateria**	_stock;
		int	_ssize;

		void	stock(AMateria* m);
		void	copystock(AMateria **tmp, int len);
};

#endif
