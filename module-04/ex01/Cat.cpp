/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:30:38 by microdri          #+#    #+#             */
/*   Updated: 2023/07/03 20:59:24 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor default and Destructor */
Cat::Cat( void ) : Animal("Cat")
{
	this->_catBrain = new Brain;
	std::cout << "Cat Constructor default called." << std::endl;
}

Cat::~Cat( void )
{
	delete _catBrain;
	std::cout << this->getType() << " destructor called." << std::endl; 
}

/* Copy constructor */
Cat::Cat( const Cat &copy ) : Animal(copy)
{
	this->_catBrain = new Brain(*copy._catBrain);
	std::cout << "Cat copy constructor called." << std::endl;
}

/* Overload Operator */
Cat& Cat::operator=( const Cat &other )
{
	Animal::operator=(other);
	this->_catBrain = new Brain(*other._catBrain);
	std::cout << "Cat Copy assignment operator called." << std::endl;
	return ( *this );
}

/* Member Function */
void Cat::makeSound( void ) const
{
	std::cout << this->getType() << " makes the sound Meeeeow..." << std::endl;
}
