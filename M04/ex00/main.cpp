/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:57:54 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/14 22:33:19 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	{
	std::cout << std::endl;
	std::cout << "----- TEST 1 -----" << std::endl;
	std::cout << std::endl;
	
	const Animal*	meta = new Animal();
	std::cout << std::endl;
	const Animal*	dog = new Dog();
	std::cout << std::endl;
	const Animal*	cat = new Cat();
	
	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();

	std::cout << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	
	delete cat;
	std::cout << std::endl;
	delete dog;
	std::cout << std::endl;
	delete meta;
	std::cout << std::endl;
	}
	{
	std::cout << "----- TEST 2 -----" << std::endl;
	std::cout << std::endl;
	
	Dog			doggy;
	std::cout << std::endl;
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
	std::cout << std::endl;
	const WrongAnimal*	W_cat = new WrongCat();

	std::cout << std::endl;
	std::cout << W_meta->getType() << std::endl;
	W_meta->makeSound();
	std::cout << std::endl;
	std::cout << W_cat->getType() << std::endl;
	W_cat->makeSound();
	std::cout << std::endl;

	delete W_cat;
	std::cout << std::endl;
	delete W_meta;
	}
	return (0);
}
