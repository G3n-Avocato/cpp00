/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:32:16 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/31 20:18:57 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class	Sed {

	public:

		Sed(char *file, char *s1, char *s2);
		~Sed(void);
	
		bool	isOpen(void) const;
		void	recoverFile(void);
		void	replace2(void);
		bool	newFile(void);

	private:
		std::string		_name;
		std::fstream	_file;
		std::string		_s_file;
		const std::string		_s1;
		const std::string		_s2;
};

#endif
