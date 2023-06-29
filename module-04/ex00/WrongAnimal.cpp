/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:57:58 by microdri          #+#    #+#             */
/*   Updated: 2023/06/29 19:13:50 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Constructor default and Destructor */
WrongAnimal::WrongAnimal( void )
{
	this->type = "Avião";
	std::cout << "WrongAnimal Constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

/* Copy constructor */
WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	*this = copy;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

/* Overload Operator */
WrongAnimal& WrongAnimal::operator=( const WrongAnimal &other )
{
	this->type = other.type;
	std::cout << "WrongAnimal Copy assignment operator called." << std::endl;
	return ( *this );
}

/* Constructor that gets name in parameters */
WrongAnimal::WrongAnimal( std::string type )
{
	this->type = type;
	std::cout << "WrongAnimal constructor that get type of animal in parameters called." << std::endl;
}

/* Member Functions */
std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << this->type << " does not make any sound because it is not an animal." << std::endl;
}
