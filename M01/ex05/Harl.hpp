/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:07:56 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/05 20:25:26 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class	Harl {
	
	public:
		
		Harl(void);
		~Harl(void);

		void	complain(std::string level);

	private:
		
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
