/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdri@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:21:44 by microdri          #+#    #+#             */
/*   Updated: 2023/05/30 14:25:57 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor e Destructor */
Fixed::Fixed( void )
{
    this->_valueFixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}


/* Copy constructor */
Fixed::Fixed( const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    // *this = copy;
    this->_valueFixedPoint  = copy.getRawBits();
}

/* Overload operator */
Fixed& Fixed::operator=( const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_valueFixedPoint =  copy.getRawBits();
    return ( *this );
}

/* Member Functios of Class Fixed */
void Fixed::setRawBits( int const raw )
{
    this->_valueFixedPoint = raw;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return ( this->_valueFixedPoint );
}
