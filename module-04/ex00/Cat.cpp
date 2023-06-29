/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:30:38 by microdri          #+#    #+#             */
/*   Updated: 2023/06/29 18:39:31 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor default and Destructor */
Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat Constructor default called." << std::endl;
}

Cat::~Cat( void )
{
	std::cout << this->getType() << " destructor called." << std::endl; 
}

/* Copy constructor */
Cat::Cat( const Cat &copy ) : Animal(copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

/* Overload Operator */
Cat& Cat::operator=( const Cat &other )
{
	Animal::operator=(other);
	std::cout << "Cat Copy assignment operator called." << std::endl;
	return ( *this );
}

/* Member Function */
void Cat::makeSound( void ) const
{
	std::cout << this->getType() << " makes the sound Meeeeow..." << std::endl;
}
