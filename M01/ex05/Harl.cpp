/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:07:33 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/05 20:31:46 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstring>

Harl::Harl(void) {

}

Harl::~Harl(void) {

}

void	Harl::debug(void) {
	std::cout << "\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\"" << std::endl;
}

void	Harl::info(void) {
	std::cout << "\"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\"" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "\"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\"" << std::endl;
}

void	Harl::error(void) {
	std::cout << "\"This is unacceptable ! I want to speak to the manager now.\"" << std::endl;
}

void	Harl::complain(std::string level) {
	void	(Harl::*f[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const char	*ref[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = 0; ref[i]; i++) {
		if (strcmp(level.c_str(), ref[i]) == 0) {	
			(this->*f[i])();
			break ;
		}
	}
	if (i == 5)
		std::cout << "\"It's not Harl's complaint...\"" << std::endl;
}
