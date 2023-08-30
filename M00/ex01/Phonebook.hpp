/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:24:54 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/30 20:47:30 by lamasson         ###   ########.fr       */
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
	PhoneBook(void);
	~PhoneBook(void);

	void	setting_orders(void);
	int		getnbcont(void) const;
	void	setnbcont(void);
	int		getoldcont(void) const;
	void	setoldcont(void);

private:
	int		_nbcont;
	int		_oldcont;
	Contact	_contacts[8];

	void	add(void);
	void	search(void);
	void	error_setting(void) const;
	int		check_input(std::string index) const;
	void	choose_index_contact(void);
};

#endif
