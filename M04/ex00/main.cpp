/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:57:54 by lamasson          #+#    #+#             */
/*   Updated: 2023/09/01 17:06:28 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();
	
	Dog				doggy;
	Dog				another_doggy(doggy);

	const WrongAnimal*	W_meta = new WrongAnimal();
	const WrongAnimal*	W_cat = new WrongCat();

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
	
	std::cout << "C'est qui mon doggy ?! " << std::endl;
	std::cout << another_doggy.getType() << " : ";
	another_doggy.makeSound();
	std::cout << std::endl;

	std::cout << W_meta->getType() << std::endl;
	W_meta->makeSound();
	std::cout << std::endl;
	std::cout << W_cat->getType() << std::endl;
	W_cat->makeSound();
	std::cout << std::endl;

	delete W_cat;
	delete W_meta;
	delete cat;
	delete dog;
	delete meta;
	return (0);
}
