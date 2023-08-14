/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:59:12 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/14 18:10:19 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;

	if (argc == 2) {
		std::string		arg(argv[1]);
		harl.complain(arg);
	}
	else 
		return (1);
	return (0);
}
