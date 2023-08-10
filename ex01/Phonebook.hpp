/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:38:06 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/10 15:22:04 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include "Contact.hpp"

class PhoneBook {

public:
	Contact	contacts[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);
	void	exit(void);

	int		getnbcont(void) const;
	void	setnbcont(int n);

private:
	int		_nbcont;
	int		_oldcont;
};

#endif
