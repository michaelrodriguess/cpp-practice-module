/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:41:09 by microdri          #+#    #+#             */
/*   Updated: 2023/06/29 18:39:35 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructor default and Destructor */
Animal::Animal( void  ) : type("Camaleão")
{
	std::cout << "Animal Constructor default called." << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called." << std::endl; 
}

/* Copy constructor */
Animal::Animal( const Animal &copy )
{
	*this = copy;
	std::cout << "Animal copy constructor called." << std::endl;
}

/* Overload Operator */
Animal& Animal::operator=( const Animal &other )
{
	this->type = other.type;
	std::cout << "Animal Copy assignment operator called." << std::endl;
	return ( *this );
}

/* Constructor that gets name in parameters */
Animal::Animal( std::string type )
{
	this->type = type;
	std::cout << "Animal constructor that get type of animal in parameters called." << std::endl;
}

/* Member Function */
std::string Animal::getType( void ) const
{
	return (this->type);
}

void Animal::makeSound( void ) const
{
	std::cout << this->type << " makes the sound Zzzzz aaah..." << std::endl;
}
