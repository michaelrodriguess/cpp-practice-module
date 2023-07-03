/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:13:59 by microdri          #+#    #+#             */
/*   Updated: 2023/07/02 21:35:30 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
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

	std::cout << "--------------------------------------------------------------------------" << std::endl;

	std::cout << "create BRAIN for Animals now." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Animal *animalsCat[10];
  	Animal *animalsDog[10];

  	for (int i = 0; i < 10; i++)
  	{
   		animalsCat[i] = new Cat();
  	}
	for (int i = 0; i < 10; i++)
	{
    	delete animalsCat[i];
	}

	for (int i = 0; i < 10; i++)
	{
    	animalsDog[i] = new Dog();
  	}
	for (int i = 0; i < 10; i++)
	{
		delete animalsDog[i];
	}

	std::cout << std::endl;
	std::cout << std::endl;

	delete meta_a;
	delete meta_d;
	delete meta_c;
	delete meta_wa;
	delete meta_wc;
}
*/

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  Animal *animalsCat[10];
  Animal *animalsDog[10];

  for (int i = 0; i < 10; i++)
  {
    animalsCat[i] = new Cat();
  }

  for (int i = 0; i < 10; i++) {
    delete animalsCat[i];
  }

	for (int i = 0; i < 10; i++)
	{
    	animalsDog[i] = new Dog();
  	}
	for (int i = 0; i < 10; i++)
	{
		delete animalsDog[i];
	}

  return 0;
}