/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:32:11 by microdri          #+#    #+#             */
/*   Updated: 2023/07/03 20:15:34 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Constructor default and Destructor */
WrongCat::WrongCat( void ) : WrongAnimal("Boot Cat")
{
	std::cout << "WrongCat Constructor called." << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor called." << std::endl;
}

/* Copy constructor */
WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
}

/* Overload Operator */
WrongCat& WrongCat::operator=( const WrongCat &other )
{
	WrongAnimal::operator=(other);
	std::cout << "WrongCat Copy assignment operator called." << std::endl;
	return( *this );
}

/* Member Functions */
void WrongCat::makeSound( void ) const
{
	std::cout << this->type << " does not make sound Meow...Makes touché" << std::endl;
}
