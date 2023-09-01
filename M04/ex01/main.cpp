/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:57:54 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/01 19:36:06 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

/*
int main(void)
{

	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();
	Dog*		doggy = new Dog();

	doggy->setIdeas("saucisse");
	std::string	*id = doggy->getIdeas();	

	for (int i = 0; i < 20; i++)
			std::cout << i << " = " << id[i] << std::endl;




	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	std::cout << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "C'est qui mon doggy ?! " << std::endl;
	std::cout << std::endl;


	delete cat;
	delete dog;
	return (0);
}*/

int	main()
{
	const Animal*	spa[20];
	Dog*	doggy = new Dog();
	Dog*	doggy_dog;
	
	std::string		sau[100];
	for (int i = 0; i < 100; i++) {
		if (i < 10)
			sau[i] = "saucisse";
		else
			sau[i] = "thon";
	}

	doggy->setIdeas(sau);
	doggy_dog = new Dog(*doggy);

	std::string	*id = doggy_dog->getIdeas();	
	for (int i = 0; i < 20; i++)
			std::cout << i << " = " << id[i] << std::endl;
	delete [] id ;

	for (int i = 0; i < 20; i++) {
		if (i < 10)
			spa[i] = new Dog();
		else
			spa[i] = new Cat();
	}
	
	for (int i = 0; i < 20; i++) {
		delete spa[i] ;
	}

	delete doggy_dog ;
	delete doggy ;
	return (0);
}
