/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:35:20 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/13 16:41:57 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character: public ICharacter {
	
	public:
		Character(const std::string *name);
		Character(Character const &src);
		Character&	operator=(const Character &rhs);
		~Character(void);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		const std::string*	_name;
		AMateria*	_items[4];
		AMateria**	_stock;

};

#endif
