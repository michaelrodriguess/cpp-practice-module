/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:30:35 by microdri          #+#    #+#             */
/*   Updated: 2023/06/29 18:23:22 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor default and Destructor */
Dog::Dog( void  ) : Animal("Dog")
{
	std::cout << "Dog Constructor default called." << std::endl;
}

Dog::~Dog( void )
{
	std::cout << this->getType() << " destructor called." << std::endl; 
}

/* Copy constructor */
Dog::Dog( const Dog &copy ) : Animal(copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

/* Overload Operator */
Dog& Dog::operator=( const Dog &other )
{
	Animal::operator=(other);
	std::cout << "Dog Copy assignment operator called." << std::endl;
	return ( *this );
}

/* Member Functions */
void Dog::makeSound( void ) const
{
	std::cout << this->getType() << " makes the sound Woof! Woof!..." << std::endl;
}
