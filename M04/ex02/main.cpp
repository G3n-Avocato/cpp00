/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:57:54 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/11 21:08:16 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	{
	std::cout << std::endl;
	std::cout << "----- TEST 1 & 6 -----" << std::endl;
	std::cout << std::endl;
	
	//const AAnimal*	meta = new AAnimal();
	const AAnimal*	dog = new Dog();
	const AAnimal*	cat = new Cat();
	
	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();

	std::cout << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();

	std::cout << std::endl;
	//std::cout << meta->getType() << " " << std::endl;
	//meta->makeSound();
	std::cout << std::endl;
	
	delete cat;
	delete dog;
	//delete meta;
	std::cout << std::endl;
	}
	{
	std::cout << "----- TEST 2 -----" << std::endl;
	std::cout << std::endl;
	
	Dog			doggy;
	Dog			another_doggy(doggy);

	std::cout << std::endl;
	std::cout << "C'est qui mon doggy ?! " << std::endl;
	std::cout << another_doggy.getType() << " : ";
	another_doggy.makeSound();
	std::cout << std::endl;

	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 3 -----" << std::endl;
	std::cout << std::endl;
	
	const WrongAnimal*	W_meta = new WrongAnimal();
	const WrongAnimal*	W_cat = new WrongCat();

	std::cout << std::endl;
	std::cout << W_meta->getType() << std::endl;
	W_meta->makeSound();
	std::cout << std::endl;
	std::cout << W_cat->getType() << std::endl;
	W_cat->makeSound();
	std::cout << std::endl;

	delete W_cat;
	delete W_meta;
	}	
	{
	std::cout << std::endl;
	std::cout << "----- TEST 4 -----" << std::endl;
	std::cout << std::endl;
	Dog*	doggy = new Dog();
	Dog*	doggy_dog;
	
	std::string		sau[100];
	for (int i = 0; i < 100; i++) {
		if (i < 10)
			sau[i] = "saucisse";
		else
			sau[i] = "thon";
	}

	std::cout << std::endl;
	doggy->setIdeas(sau);
	doggy_dog = new Dog(*doggy);
	
	std::cout << std::endl;
	std::string	*id = doggy_dog->getIdeas();	
	
	std::cout << "Check tableau d'idées:" << std::endl;
	
	for (int i = 0; i < 20; i++)
			std::cout << i << " = " << id[i] << std::endl;
	std::cout << std::endl;
	
	delete [] id ;
		
	delete doggy_dog ;
	delete doggy ;
	}
	{
	std::cout << std::endl;
	std::cout << "----- TEST 5 -----" << std::endl;
	std::cout << std::endl;

	const AAnimal*	spa[20];
	
	for (int i = 0; i < 20; i++) {
		if (i < 10)
			spa[i] = new Dog();
		else
			spa[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 20; i++) {
		delete spa[i] ;
		std::cout << std::endl;
	}
	}
	{
	std::cout << "----- TEST 6 -----" << std::endl;
	std::cout << std::endl;	

	std::string	tab[100];
	for (int i = 0; i < 100; i++)
		tab[i] = "DEEP COPY BRAIN ID";

	Dog*	dog = new Dog();
	dog->setIdeas(tab);
	std::cout << std::endl;
	Cat*	cat = new Cat();
	cat->setIdeas(tab);
	std::cout << std::endl;
	
	const Dog*	Spa[3];
	std::cout << std::endl;
	const Cat*	Aps[3];
	std::cout << std::endl;

	for (int i = 0; i < 3; i++) {
		Spa[i] = new Dog(*dog);
		std::cout << std::endl;
		Aps[i] = new Cat(*cat);
		std::cout << std::endl;
	}
	
	std::string	*id;
	std::string	*di;
	for (int i = 0; i < 3; i++) {
		id = Spa[i]->getIdeas();
		di = Aps[i]->getIdeas();
		for (int y = 0; y < 5; y++)
			std::cout << "Spa[" << i << "] = " << id[y] << std::endl;
		std::cout << std::endl;
		for (int y = 0; y < 5; y++)
			std::cout << "Aps[" << i << "] = " << di[y] << std::endl;
		std::cout << std::endl;
		delete [] id;
		delete [] di;
	}

	for (int i = 0; i < 3; i++) {
		delete Spa[i];
		std::cout << std::endl;
	}
	for (int i = 0; i < 3; i++) {
		delete Aps[i];
		std::cout << std::endl;
	}
	delete dog ;
	std::cout << std::endl;
	delete cat ;
	}
	return (0);
}
