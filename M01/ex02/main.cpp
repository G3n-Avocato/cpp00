/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:02:45 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/12 22:45:06 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "addresse string : " << &string << std::endl;
	std::cout << "adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "adresse stockée dans stringREF : " << &stringREF << std::endl;

	std::cout << "valeur de la string : " << string << std::endl;
	std::cout << "valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "valeur pointée par stringREF : " << stringREF << std::endl;
	return (0);
}
