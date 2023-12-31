/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:29:09 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/22 22:29:39 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    {
        std::cout << std::endl;
        std::cout << "----- TEST 1 -----" << std::endl;
        std::cout << std::endl;
    
        Bureaucrat  Steve("Steve", 150);
        Bureaucrat  Robert("Robert", 2);

        std::cout << Robert << std::endl;
        std::cout << Steve << std::endl;
        
        Robert.upGrade();

        std::cout << Robert << std::endl;
        std::cout << Steve << std::endl;

        Robert.upGrade();
        Steve.downGrade();

        std::cout << Steve << std::endl;
    }
    {
        std::cout << std::endl;
        std::cout << "----- TEST 2 -----" << std::endl;
        std::cout << std::endl;
    
        Bureaucrat  Alice;
        Bureaucrat  Jeanne("Jeanne", 17);
        Bureaucrat  Vee(Jeanne);
        Bureaucrat  Johny("Johny", 176);

        std::cout << std::endl;
        std::cout << Alice << std::endl;
        std::cout << Jeanne << std::endl;
        std::cout << Vee << std::endl;
        std::cout << Johny << std::endl;

        Alice.downGrade();
        Jeanne.upGrade();
	Johny = Jeanne;
        
        std::cout << std::endl;
        std::cout << Alice << std::endl;
        std::cout << Jeanne << std::endl;
        std::cout << Vee << std::endl;
        std::cout << Johny << std::endl;
    }
	return (0);
}
