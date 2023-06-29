/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:13:59 by microdri          #+#    #+#             */
/*   Updated: 2023/06/29 19:13:48 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{	
	const Animal* meta_a = new Animal();
	const Animal* meta_d = new Dog();
	const Animal* meta_c = new Cat();
	const WrongAnimal* meta_wa = new WrongAnimal();
	const WrongAnimal* meta_wc = new WrongCat();
	
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "REAL ANIMAL" << std::endl;
	std::cout << meta_a->getType() << "." << std::endl;
	std::cout << meta_d->getType() << "." << std::endl;
	std::cout << meta_c->getType() << "." << std::endl;
	meta_a->makeSound();
	meta_d->makeSound();
	meta_c->makeSound();

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "WRONG ANIMAL NOW" << std::endl;
	std::cout << meta_wa->getType() << "." << std::endl;
	std::cout << meta_wc->getType() << "." << std::endl;
	meta_wa->makeSound();
	meta_wc->makeSound();


	std::cout << std::endl;
	std::cout << std::endl;

	delete meta_a;
	delete meta_d;
	delete meta_c;
	delete meta_wa;
	delete meta_wc;
}
