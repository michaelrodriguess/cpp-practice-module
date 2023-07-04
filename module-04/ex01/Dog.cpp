/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:30:35 by microdri          #+#    #+#             */
/*   Updated: 2023/07/04 16:23:09 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor default and Destructor */
Dog::Dog( void  ) : Animal("Dog")
{
	this->_dogBrain = new Brain();
	std::cout << "Dog Constructor default called." << std::endl;
}

Dog::~Dog( void )
{
	delete _dogBrain;
	std::cout << this->getType() << " destructor called." << std::endl; 
}

/* Copy constructor */
Dog::Dog( const Dog &copy )
{
	this->type = copy.type;
	this->_dogBrain = new Brain(*copy._dogBrain);
	std::cout << "Dog copy constructor called." << std::endl;
}

/* Overload Operator */
Dog& Dog::operator=( const Dog &other )
{
	std::cout << "Dog Copy assignment operator called." << std::endl;
	this->_dogBrain = new Brain(*other._dogBrain);
	Animal::operator=(other);
	std::cout << "Dog Copy assignment operator called." << std::endl;
	return ( *this );
}

/* Member Functions */
void Dog::makeSound( void ) const
{
	std::cout << this->getType() << " makes the sound Woof! Woof!..." << std::endl;
}
