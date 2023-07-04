/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:36:01 by microdri          #+#    #+#             */
/*   Updated: 2023/07/04 15:49:55 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructor default */
Brain::Brain(void)
{
	for( int i = 0; i < 25; i++ )
		ideas[i] = "Estou com fome.";
	for( int i = 25; i < 50; i++ )
		ideas[i] = "mindá um pedaco pufavor.";
	for( int i = 50; i < 75; i++ )
		ideas[i] = "Vamos mijar na perna do dono?";
	for( int i = 75; i < 100; i++ )
		ideas[i] = "Quero passear";
	std::cout << "Brain Constructor called." << std::endl;
}

/* Destructor */
Brain::~Brain()
{
	std::cout << "Brain Destructor called." << std::endl;
}

/* Copy constructor  */
Brain::Brain(const Brain &copy)
{
	for( int i = 0; i < 100; i++ )
		ideas[i] = copy.ideas[i];
	std::cout << "Brain Copy constructor called." << std::endl;
}

/* Overload Operator */
Brain& Brain::operator=(const Brain &other)
{
	for( int i = 0; i < 100; i++ )
		ideas[i] = other.ideas[i];
	std::cout << "Brain Copy assignment operator called." << std::endl;
	return (*this);
}
