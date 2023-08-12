/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:12:35 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/12 18:16:58 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {

	public:
		Contact(void);
		~Contact(void);

		void	add_new_contact(void);
		void	eraser_old_contact(void);
		void	print_contact(int i);
		void	print_data_contact(void) const;

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

		void	first_name(void);
		void	last_name(void);
		void	nickname(void);
		void	phone_number(void);
		void	darkest_secret(void);

		std::string	return_first_name(void);
		std::string	return_last_name(void);
		std::string	return_nickname(void);
};

#endif
