/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:13:59 by microdri          #+#    #+#             */
/*   Updated: 2023/07/04 16:24:46 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{	
	std::cout << "--------------------------------------------------------------------------" << std::endl;

	std::cout << "create BRAIN for Animals now." << std::endl;
	Animal *animals[10];

	std::cout << std::endl;
	std::cout << std::endl;

  	for (int i = 0; i < 5; i++)
  	{
   		animals[i] = new Cat();
  	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 5; i < 10; i++)
	{
    	animals[i] = new Dog();
  	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}

	std::cout << std::endl;
	std::cout << std::endl;

}
