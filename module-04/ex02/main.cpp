/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:13:59 by microdri          #+#    #+#             */
/*   Updated: 2023/07/03 21:14:20 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	
	Animal *animals[6];
		
	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{	
		animals[i] = new Dog();
		animals[i]->makeSound();
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 3; i < 6; i++)
	{
		animals[i] = new Cat();
		animals[i]->makeSound();
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 6; i++)
	{
		delete animals[i];
	}

}
